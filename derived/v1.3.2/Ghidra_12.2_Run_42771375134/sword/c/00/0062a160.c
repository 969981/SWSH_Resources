/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0062a160; name: FUN_0062a160
 */


/* WARNING: Removing unreachable block (ram,0x0062a1c4) */

undefined8 FUN_0062a160(long param_1,uint param_2,void *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint *puVar6;
  
  puVar6 = *(uint **)(param_1 + 0x478);
  if (puVar6 == (uint *)0x0) {
    uVar2 = FUN_00629640(param_1,0);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    puVar6 = *(uint **)(param_1 + 0x478);
    lVar3 = *(long *)(puVar6 + 2);
  }
  else {
    lVar3 = *(long *)(puVar6 + 2);
  }
  if ((lVar3 == 0) && (uVar2 = FUN_0062a530(param_1,0,0,1), (int)uVar2 != 0)) {
    return uVar2;
  }
  uVar5 = *puVar6;
  uVar1 = uVar5;
  if (param_2 <= uVar5) {
    uVar1 = param_2;
  }
  if (*(char *)(param_1 + 0x471) == '\0') {
    if (uVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      memset(param_3,0,(ulong)uVar1 << 3);
    }
  }
  else if (uVar1 != 0) {
    if (param_2 <= uVar5) {
      uVar5 = param_2;
    }
    if (uVar1 == 1) {
      lVar3 = 0;
LAB_0062a284:
      *(undefined8 *)((long)param_3 + lVar3 * 8) =
           *(undefined8 *)(*(long *)(puVar6 + 2) + lVar3 * 8);
    }
    else {
      lVar3 = 0;
      do {
        lVar4 = lVar3 * 8;
        lVar3 = lVar3 + 2;
        *(undefined8 *)((long)param_3 + lVar4) = *(undefined8 *)(*(long *)(puVar6 + 2) + lVar4);
        ((undefined8 *)((long)param_3 + lVar4))[1] =
             *(undefined8 *)(*(long *)(puVar6 + 2) + lVar4 + 8);
      } while ((ulong)uVar1 - ((ulong)uVar1 & 1) != lVar3);
      if ((uVar1 & 1) != 0) goto LAB_0062a284;
    }
    if (param_2 <= uVar5) {
      return 0;
    }
    goto LAB_0062a29c;
  }
  uVar5 = 0;
  if (param_2 == 0) {
    return 0;
  }
LAB_0062a29c:
                    /* WARNING: Subroutine does not return */
  memset((void *)((long)param_3 + (ulong)uVar5 * 8),0,(ulong)(~uVar5 + param_2) * 8 + 8);
}


