/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00133990; name: FUN_00133990
 */


void FUN_00133990(long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  long local_50;
  undefined8 local_48;
  
  local_48 = 0;
  local_50 = 0;
  if (*(int *)(param_1 + 0x20) == 0) {
LAB_00133ae4:
    lVar3 = local_50;
    if (((-1 < (long)local_48) && ((local_48 & 0x7fffffff00000000) != 0)) && (local_50 != 0)) {
                    /* try { // try from 00133afc to 00133b0f has its CatchHandler @ 00133b28 */
      plVar4 = (long *)FUN_00400d30();
      (**(code **)(*plVar4 + 0x18))(plVar4,lVar3);
    }
    return;
  }
  uVar6 = **(uint **)(param_1 + 0x18);
  if (uVar6 == 0xffffffff) {
    uVar1 = 1;
    do {
      uVar5 = uVar1;
      if (*(uint *)(param_1 + 0x24) == uVar5) goto LAB_00133ae4;
      uVar6 = (*(uint **)(param_1 + 0x18))[uVar5];
      uVar1 = uVar5 + 1;
    } while (uVar6 == 0xffffffff);
  }
  else {
    uVar5 = 0;
  }
  do {
    do {
      plVar4 = *(long **)(*(long *)(param_1 + 8) + (ulong)uVar6 * 0x10 + 8);
                    /* try { // try from 00133a0c to 00133a63 has its CatchHandler @ 00133b64 */
      uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,param_2);
      if ((uVar2 & 1) != 0) {
        if ((uint)local_48 < (local_48._4_4_ & 0x7fffffff)) {
          *(undefined8 *)(local_50 + (local_48 & 0xffffffff) * 8) =
               *(undefined8 *)(*(long *)(param_1 + 8) + (ulong)uVar6 * 0x10);
          local_48 = CONCAT44(local_48._4_4_,(uint)local_48 + 1);
        }
        else {
          FUN_00134460(&local_50);
        }
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      }
      uVar6 = *(uint *)(*(long *)(param_1 + 0x10) + (ulong)uVar6 * 4);
    } while (uVar6 != 0xffffffff);
    do {
      if (*(int *)(param_1 + 0x24) - 1U == uVar5) {
        if ((uint)local_48 != 0) {
          lVar3 = 0;
          uVar2 = 0;
          do {
                    /* try { // try from 00133ac8 to 00133acf has its CatchHandler @ 00133b2c */
            FUN_00134600(param_1,local_50 + lVar3);
            uVar2 = uVar2 + 1;
            lVar3 = lVar3 + 8;
          } while (uVar2 < (local_48 & 0xffffffff));
        }
        goto LAB_00133ae4;
      }
      uVar5 = uVar5 + 1;
      uVar6 = *(uint *)(*(long *)(param_1 + 0x18) + (ulong)uVar5 * 4);
    } while (uVar6 == 0xffffffff);
  } while( true );
}


