//
// Created by Hengruo Zhang on 3/29/20.
//

#ifndef RUNESIM_GAME_ENTITY_H
#define RUNESIM_GAME_ENTITY_H

#include "card.h"

class EntityImpl {
public:
  RSID entityId = -1;
  RSID cardId = -1;
  RSID playerId = -1;
  const Card *card = nullptr;
  i8 cost = 0;
  i8 maxHealthInGame = 0;
  i8 maxHealthInRound = 0;
  i8 currentHealth = 0;
  i8 maxAttackInGame = 0;
  i8 maxAttackInRound = 0;
  i8 currentAttack = 0;
  i8 attackPosition = -1;
  u64 keywordsMask = 0;
  bool summoned = false;
  bool purified = false;
  bool detained = false;
  bool barriered = false;
  bool discarded = false; // if discarded
  bool dead = false; // if in graveyard
  bool stunned = false;
  bool inAttack = false;
  bool bonded = false;
  bool isBonder = false;
  RSID detainerId = -1;
  RSID bondedId = -1;
  EntityImpl();
  EntityImpl(RSID EntId, RSID CardId, RSID PlayerId);

  static EntityImpl *build(RSID entId, RSID cardId, RSID PlayerId);
};

enum class EntityType {
  NEXUS,
  CARD
};

class Entity {
private:
  EntityType type;
  sptr<EntityImpl> content;
public:
  Entity();
private:
  Entity(RSID entId, RSID cardId, RSID playerId);
  void enableBonder(RSID bondeeId);
  void enableBondee(RSID bonderId);
public:
  static Result<Entity> buildNexus(RSID entityId, RSID playerId);
  static Result<Entity> buildCard(RSID entityId, RSID cardId, RSID playerId);
  // ================================
  // get the value of a member
  // ================================
  const Card *getCard() const;
  RSID getEntityId() const;
  RSID getPlayerId() const;
  bool isNexus() const;
  bool isCard() const;
  i8 getHealth() const;
  i8 getAttack() const;
  i8 getAttackPosition() const;
  bool isDead() const;
  bool isDetained() const;
  bool isInAttack() const;
  bool isDiscarded() const;
  bool isSummoned() const;
  bool isUnit() const;
  bool isFollower() const;
  bool isChampion() const;
  bool isSpell() const;
  bool isSkill() const;
  bool isTrap() const;
  bool isBonder() const;
  bool isBondee() const;
  RSID getBondedId() const;
  RSID getDetainerId() const;

  // ================================
  // perform an action
  // ================================
  Entity getCopy();
  Entity getEphemeralCopy();
  void beHurt(i8 damage);
  void beStunned();
  void beDenied();
  void beDiscarded();
  void gainAttackInRound(i8 offset);
  void gainHealthInRound(i8 offset);
  void loseEffectsInRound();
  void transform(RSID cardId);
  void die();
  void levelUp(RSID cardId);
  bool isCastable(Event event);
  bool isPlayable(Event event);
  // perform effects of spells or skills
  void perform(Event event);
  void bond(RSID bondeeId);
  void quench();
  void prepareAttack(i8 position);
  void quitAttack();
};

#endif //RUNESIM_GAME_ENTITY_H