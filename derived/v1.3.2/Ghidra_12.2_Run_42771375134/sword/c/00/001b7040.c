/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b7040; name: FUN_001b7040
 */


void FUN_001b7040(long param_1)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  long local_40;
  undefined8 local_38;
  
  local_38 = 0;
  local_40 = 0;
  if (*(int *)(param_1 + 0x344) != 0) {
                    /* try { // try from 001b7064 to 001b706b has its CatchHandler @ 001b759c */
    FUN_001c66c0(&local_40);
  }
  if (*(int *)(param_1 + 0x330) != 0) {
    uVar6 = **(uint **)(param_1 + 0x328);
    if (uVar6 == 0xffffffff) {
      uVar2 = 1;
      do {
        uVar4 = uVar2;
        if (*(uint *)(param_1 + 0x334) == uVar4) goto LAB_001b7128;
        uVar6 = (*(uint **)(param_1 + 0x328))[uVar4];
        uVar2 = uVar4 + 1;
      } while (uVar6 == 0xffffffff);
    }
    else {
      uVar4 = 0;
    }
    do {
      do {
        if ((uint)local_38 < (local_38._4_4_ & 0x7fffffff)) {
          *(undefined8 *)(local_40 + (local_38 & 0xffffffff) * 8) =
               *(undefined8 *)(*(long *)(param_1 + 0x318) + (ulong)uVar6 * 8);
          local_38 = CONCAT44(local_38._4_4_,(uint)local_38 + 1);
        }
        else {
                    /* try { // try from 001b70e4 to 001b70eb has its CatchHandler @ 001b76bc */
          FUN_001c6820(&local_40);
        }
        uVar6 = *(uint *)(*(long *)(param_1 + 800) + (ulong)uVar6 * 4);
      } while (uVar6 != 0xffffffff);
      do {
        if (*(int *)(param_1 + 0x334) - 1U == uVar4) goto LAB_001b7128;
        uVar4 = uVar4 + 1;
        uVar6 = *(uint *)(*(long *)(param_1 + 0x328) + (ulong)uVar4 * 4);
      } while (uVar6 == 0xffffffff);
    } while( true );
  }
LAB_001b7128:
  if ((uint)local_38 != 0) {
    uVar5 = 0;
    do {
                    /* try { // try from 001b7144 to 001b7147 has its CatchHandler @ 001b7684 */
      (**(code **)**(undefined8 **)(local_40 + uVar5 * 8))();
      uVar5 = uVar5 + 1;
    } while (uVar5 < (local_38 & 0xffffffff));
  }
  lVar1 = local_40;
  if (((-1 < (long)local_38) && ((local_38 & 0x7fffffff00000000) != 0)) && (local_40 != 0)) {
                    /* try { // try from 001b7170 to 001b7183 has its CatchHandler @ 001b7598 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar1);
  }
  local_40 = 0;
  local_38 = 0;
  if (*(int *)(param_1 + 0x3b4) != 0) {
                    /* try { // try from 001b7190 to 001b7197 has its CatchHandler @ 001b7588 */
    FUN_001c69b0(&local_40);
  }
  if (*(int *)(param_1 + 0x3a0) != 0) {
    uVar6 = **(uint **)(param_1 + 0x398);
    if (uVar6 == 0xffffffff) {
      uVar2 = 1;
      do {
        uVar4 = uVar2;
        if (*(uint *)(param_1 + 0x3a4) == uVar4) goto LAB_001b7254;
        uVar6 = (*(uint **)(param_1 + 0x398))[uVar4];
        uVar2 = uVar4 + 1;
      } while (uVar6 == 0xffffffff);
    }
    else {
      uVar4 = 0;
    }
    do {
      do {
        if ((uint)local_38 < (local_38._4_4_ & 0x7fffffff)) {
          *(undefined8 *)(local_40 + (local_38 & 0xffffffff) * 8) =
               *(undefined8 *)(*(long *)(param_1 + 0x388) + (ulong)uVar6 * 8);
          local_38 = CONCAT44(local_38._4_4_,(uint)local_38 + 1);
        }
        else {
                    /* try { // try from 001b7210 to 001b7217 has its CatchHandler @ 001b7674 */
          FUN_001c6b10(&local_40);
        }
        uVar6 = *(uint *)(*(long *)(param_1 + 0x390) + (ulong)uVar6 * 4);
      } while (uVar6 != 0xffffffff);
      do {
        if (*(int *)(param_1 + 0x3a4) - 1U == uVar4) goto LAB_001b7254;
        uVar4 = uVar4 + 1;
        uVar6 = *(uint *)(*(long *)(param_1 + 0x398) + (ulong)uVar4 * 4);
      } while (uVar6 == 0xffffffff);
    } while( true );
  }
LAB_001b7254:
  if ((uint)local_38 != 0) {
    uVar5 = 0;
    do {
                    /* try { // try from 001b7270 to 001b7273 has its CatchHandler @ 001b763c */
      (**(code **)**(undefined8 **)(local_40 + uVar5 * 8))();
      uVar5 = uVar5 + 1;
    } while (uVar5 < (local_38 & 0xffffffff));
  }
  lVar1 = local_40;
  if (((-1 < (long)local_38) && ((local_38 & 0x7fffffff00000000) != 0)) && (local_40 != 0)) {
                    /* try { // try from 001b729c to 001b72af has its CatchHandler @ 001b7584 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar1);
  }
  local_40 = 0;
  local_38 = 0;
  if (*(int *)(param_1 + 0x37c) != 0) {
                    /* try { // try from 001b72bc to 001b72c3 has its CatchHandler @ 001b7574 */
    FUN_001c6ca0(&local_40);
  }
  if (*(int *)(param_1 + 0x368) != 0) {
    uVar6 = **(uint **)(param_1 + 0x360);
    if (uVar6 == 0xffffffff) {
      uVar2 = 1;
      do {
        uVar4 = uVar2;
        if (*(uint *)(param_1 + 0x36c) == uVar4) goto LAB_001b7380;
        uVar6 = (*(uint **)(param_1 + 0x360))[uVar4];
        uVar2 = uVar4 + 1;
      } while (uVar6 == 0xffffffff);
    }
    else {
      uVar4 = 0;
    }
    do {
      do {
        if ((uint)local_38 < (local_38._4_4_ & 0x7fffffff)) {
          *(undefined8 *)(local_40 + (local_38 & 0xffffffff) * 8) =
               *(undefined8 *)(*(long *)(param_1 + 0x350) + (ulong)uVar6 * 8);
          local_38 = CONCAT44(local_38._4_4_,(uint)local_38 + 1);
        }
        else {
                    /* try { // try from 001b733c to 001b7343 has its CatchHandler @ 001b762c */
          FUN_001c6e00(&local_40);
        }
        uVar6 = *(uint *)(*(long *)(param_1 + 0x358) + (ulong)uVar6 * 4);
      } while (uVar6 != 0xffffffff);
      do {
        if (*(int *)(param_1 + 0x36c) - 1U == uVar4) goto LAB_001b7380;
        uVar4 = uVar4 + 1;
        uVar6 = *(uint *)(*(long *)(param_1 + 0x360) + (ulong)uVar4 * 4);
      } while (uVar6 == 0xffffffff);
    } while( true );
  }
LAB_001b7380:
  if ((uint)local_38 != 0) {
    uVar5 = 0;
    do {
                    /* try { // try from 001b739c to 001b739f has its CatchHandler @ 001b75f4 */
      (**(code **)**(undefined8 **)(local_40 + uVar5 * 8))();
      uVar5 = uVar5 + 1;
    } while (uVar5 < (local_38 & 0xffffffff));
  }
  lVar1 = local_40;
  if (((-1 < (long)local_38) && ((local_38 & 0x7fffffff00000000) != 0)) && (local_40 != 0)) {
                    /* try { // try from 001b73c8 to 001b73db has its CatchHandler @ 001b7570 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar1);
  }
  local_40 = 0;
  local_38 = 0;
  if (*(int *)(param_1 + 0x3ec) != 0) {
                    /* try { // try from 001b73e8 to 001b73ef has its CatchHandler @ 001b7560 */
    FUN_001c6f90(&local_40);
  }
  if (*(int *)(param_1 + 0x3d8) == 0) {
LAB_001b74ac:
    if ((uint)local_38 != 0) {
      uVar5 = 0;
      do {
                    /* try { // try from 001b74c8 to 001b74cb has its CatchHandler @ 001b75ac */
        (**(code **)**(undefined8 **)(local_40 + uVar5 * 8))();
        uVar5 = uVar5 + 1;
      } while (uVar5 < (local_38 & 0xffffffff));
    }
    lVar1 = local_40;
    if (((-1 < (long)local_38) && ((local_38 & 0x7fffffff00000000) != 0)) && (local_40 != 0)) {
                    /* try { // try from 001b74f4 to 001b7507 has its CatchHandler @ 001b755c */
      plVar3 = (long *)FUN_00400d30();
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar1);
    }
    while (*(int *)(param_1 + 0x424) != 0) {
      FUN_00205580(**(undefined8 **)(param_1 + 0x3f8));
    }
    while (*(int *)(param_1 + 0x1cf0) != 0) {
      (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x1ce8))();
    }
    FUN_0029b060(param_1);
    return;
  }
  uVar6 = **(uint **)(param_1 + 0x3d0);
  if (uVar6 == 0xffffffff) {
    uVar2 = 1;
    do {
      uVar4 = uVar2;
      if (*(uint *)(param_1 + 0x3dc) == uVar4) goto LAB_001b74ac;
      uVar6 = (*(uint **)(param_1 + 0x3d0))[uVar4];
      uVar2 = uVar4 + 1;
    } while (uVar6 == 0xffffffff);
  }
  else {
    uVar4 = 0;
  }
  do {
    do {
      if ((uint)local_38 < (local_38._4_4_ & 0x7fffffff)) {
        *(undefined8 *)(local_40 + (local_38 & 0xffffffff) * 8) =
             *(undefined8 *)(*(long *)(param_1 + 0x3c0) + (ulong)uVar6 * 8);
        local_38 = CONCAT44(local_38._4_4_,(uint)local_38 + 1);
      }
      else {
                    /* try { // try from 001b7468 to 001b746f has its CatchHandler @ 001b75bc */
        FUN_001c70f0(&local_40);
      }
      uVar6 = *(uint *)(*(long *)(param_1 + 0x3c8) + (ulong)uVar6 * 4);
    } while (uVar6 != 0xffffffff);
    do {
      if (*(int *)(param_1 + 0x3dc) - 1U == uVar4) goto LAB_001b74ac;
      uVar4 = uVar4 + 1;
      uVar6 = *(uint *)(*(long *)(param_1 + 0x3d0) + (ulong)uVar4 * 4);
    } while (uVar6 == 0xffffffff);
  } while( true );
}


