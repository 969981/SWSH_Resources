/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01023150; name: FUN_01023150
 */


ulong FUN_01023150(long param_1,long *param_2,undefined8 param_3)

{
  uint *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long local_38;
  
  uVar3 = *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20);
  if ((int)(uVar3 >> 6) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    lVar2 = 0;
    puVar1 = (uint *)(*(long *)(param_1 + 0x20) + 0x38);
    uVar4 = 0xffffffff;
    do {
      if (*(long *)(puVar1 + -0xe) == *param_2) {
        uVar4 = (ulong)*puVar1;
        if ((int)*puVar1 < 0) {
          uVar4 = 1;
          lVar2 = param_1;
          goto LAB_010231d0;
        }
        break;
      }
      lVar2 = lVar2 + 1;
      puVar1 = puVar1 + 0x10;
    } while (lVar2 < (long)(uVar3 * 0x4000000) >> 0x20);
  }
  goto LAB_010232c0;
  while( true ) {
    if (*(long *)(lVar2 + 0x168) == 0) goto LAB_01023200;
    uVar3 = uVar4 + 1;
    uVar4 = uVar4 + 2;
    lVar2 = lVar2 + 0x220;
    if (0x3f < uVar3) break;
LAB_010231d0:
    if (*(long *)(lVar2 + 0x58) == 0) {
      uVar4 = uVar4 - 1;
LAB_01023200:
      *(undefined1 *)(param_1 + 0x4451) = 0;
      *puVar1 = (uint)uVar4;
      puVar1[1] = 1;
      uVar3 = uVar4 & 0xffffffff;
      FUN_006dccd0(&local_38,*(undefined8 *)PTR_DAT_02710788,1,puVar1 + -0xc,0,param_3,0);
      plVar5 = (long *)(param_1 + uVar3 * 0x110 + 0x58);
      if (*plVar5 != 0) {
        (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
        *plVar5 = 0;
      }
      *plVar5 = local_38;
      if (local_38 != 0) {
        plVar5 = (long *)(local_38 + 0x48);
        (**(code **)(*plVar5 + 0x10))(plVar5);
        if ((*(long *)(param_1 + uVar3 * 0x110 + 0x60) != 0) ||
           (*(long *)(param_1 + uVar3 * 0x110 + 0xe0) != 0)) {
          FUN_006e1e70(local_38,param_1 + uVar3 * 0x110 + 0x50,1);
        }
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
      goto LAB_010232c0;
    }
  }
  uVar4 = 0xffffffff;
LAB_010232c0:
  return uVar4 & 0xffffffff;
}


