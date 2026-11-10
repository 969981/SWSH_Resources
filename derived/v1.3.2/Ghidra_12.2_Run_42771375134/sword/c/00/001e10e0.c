/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e10e0; name: FUN_001e10e0
 */


void FUN_001e10e0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long local_58;
  
  puVar4 = PTR_DAT_02711048;
  lVar5 = *(long *)(param_1 + 8);
  if ((lVar5 != 0) && (iVar7 = *(int *)(lVar5 + 0x50), iVar7 != 0)) {
    uVar8 = 0;
    do {
      while( true ) {
        iVar7 = iVar7 + -1;
        if (*(char *)(*(long *)(lVar5 + 0x48) + uVar8 * 0x10) == '\0') break;
        uVar8 = (ulong)((int)uVar8 + 1);
joined_r0x001e11c0:
        if (iVar7 == 0) {
          return;
        }
      }
      lVar6 = *(long *)(*(long *)(lVar5 + 0x48) + uVar8 * 0x10 + 8);
      FUN_001e06f0(lVar6,param_2);
      lVar5 = FUN_001df840(lVar6);
      if (lVar5 != 0) {
        FUN_001ce480(lVar5 + 0x10,lVar6 + 0x20);
        local_58 = lVar6;
        FUN_001e08f0(lVar5 + 0x25b0,&local_58);
      }
      lVar5 = *(long *)(param_1 + 8);
      uVar3 = *(int *)(lVar5 + 0x50) - 1;
      *(uint *)(lVar5 + 0x50) = uVar3;
      puVar2 = (undefined8 *)(*(long *)(lVar5 + 0x48) + uVar8 * 0x10);
      puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x48) + (ulong)uVar3 * 0x10);
      puVar2[1] = puVar1[1];
      *puVar2 = *puVar1;
      lVar5 = *(long *)(param_1 + 8);
      if (*(int *)(lVar5 + 0x50) != 0) goto joined_r0x001e11c0;
      if (-1 < *(int *)(lVar5 + 0x54)) {
        FUN_001b9ad0(*(undefined8 *)puVar4);
      }
      lVar5 = 0;
      *(undefined8 *)(param_1 + 8) = 0;
    } while (iVar7 != 0);
  }
  return;
}


