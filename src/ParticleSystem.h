#ifndef _PARTICLE_SYSTEM_H_
#define _PARTICLE_SYSTEM_H_

#include "KeyboardState.h"
#include "Particle.h"
#include "ObjectCollection.h"

#define DEFAULT_PARTICLES_PER_SECOND 84
#define CHANGE_IN_TRANSLATION 0.1f
#define CHANGE_IN_PARTICLES_PER_SECOND 1
#define CHANGE_IN_SIZE 0.01f
#define CHANGE_IN_COLOR 0.01f

typedef struct ParticleProperties {
   float birthSize;
   float deathSize;
   Color birthColor;
   Color deathColor;
   Vector velocity;
   Vector acceleration;
   Vector force;
} ParticleProperties;

class ParticleSystem: public Object {
   private:
      ObjectCollection particles;
      float particlesPerSecond;
      float timeElapsed;
      float totalTime;
      KeyboardState keyboardState;
      ParticleProperties particleProperties;

      void setTimeElapsed(float newTimeElapsed);
      void initializeParticlesPerSecond();
      void initializeParticleProperties();
      void addParticlesToSystem();
      Particle* createCustomParticle();
      void updateParticles();
      void keyboardActions();
      void updateSourceForce();

      void translatePositiveX();
      void translateNegativeX();
      void translatePositiveY();
      void translateNegativeY();
      void translatePositiveZ();
      void translateNegativeZ();

   public:
      ParticleSystem();
      void draw();
      void update(float timeElapsed);
      void setKeyboardState(KeyboardState newKeyboardState);
      void resetSystem();

      void increaseParticlesPerSecond();
      void decreaseParticlesPerSecond();
      void increaseBirthSize();
      void decreaseBirthSize();
      void increaseDeathSize();
      void decreaseDeathSize();
      void increaseBirthRed();
      void decreaseBirthRed();
      void increaseDeathRed();
      void decreaseDeathRed();
      void increaseBirthGreen();
      void decreaseBirthGreen();
      void increaseDeathGreen();
      void decreaseDeathGreen();
      void increaseBirthBlue();
      void decreaseBirthBlue();
      void increaseDeathBlue();
      void decreaseDeathBlue();
};

#endif
