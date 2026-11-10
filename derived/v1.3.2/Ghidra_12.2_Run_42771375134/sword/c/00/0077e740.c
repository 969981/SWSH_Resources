/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077e740; name: FUN_0077e740
 */


undefined2 FUN_0077e740(long param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ushort *puVar4;
  ulong uVar5;
  uint *puVar6;
  long lVar7;
  int *piVar8;
  
  puVar4 = *(ushort **)(param_1 + 0x90);
  if (puVar4[1] <= param_2) {
    FUN_0077d660(param_3);
    return 0;
  }
  uVar1 = *(uint *)PTR_DAT_02716218 & 0xff;
  if ((uint)*puVar4 <= *(uint *)PTR_DAT_02716218) {
    uVar1 = 0;
  }
  if (*(uint *)(param_1 + 0x88) == uVar1) {
    iVar2 = *(int *)(param_1 + 0x54);
joined_r0x0077e810:
    if (iVar2 == 0) goto LAB_0077e834;
    puVar6 = (uint *)(*(long *)(param_1 + 0x98) + (ulong)param_2 * 8 + 4);
  }
  else {
    piVar8 = (int *)(param_1 + 0x54);
    *(uint *)(param_1 + 0x88) = uVar1;
    if (*piVar8 != 0) {
      uVar5 = (ulong)*(uint *)(puVar4 + (ulong)uVar1 * 2 + 6);
      if (*(char *)(param_1 + 0x1c0) == '\0') {
        *(ulong *)(param_1 + 0x98) = uVar5 + (long)puVar4;
        iVar2 = *piVar8;
      }
      else {
        FUN_0077e570(param_1,param_1 + 0x58,uVar5,*(undefined8 *)(param_1 + 0x98),4);
        FUN_0077e570(param_1,param_1 + 0x58,uVar5,*(undefined4 **)(param_1 + 0x98),
                     **(undefined4 **)(param_1 + 0x98));
        iVar2 = *piVar8;
      }
      goto joined_r0x0077e810;
    }
LAB_0077e834:
    puVar6 = (uint *)(param_1 + 0xa0);
    FUN_0077e570(param_1,param_1 + 0x58,
                 *(int *)(*(long *)(param_1 + 0x90) + (ulong)*(uint *)(param_1 + 0x88) * 4 + 0xc) +
                 (param_2 << 3 | 4),puVar6,8);
    if (*(int *)(param_1 + 0x54) == 0) {
      lVar7 = (ulong)*(ushort *)(param_1 + 0xa4) << 1;
      lVar3 = (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),lVar7,8);
      if (lVar3 != 0) {
        FUN_0077e570(param_1,param_1 + 0x58,
                     *(int *)(param_1 + 0xa0) +
                     *(int *)(*(long *)(param_1 + 0x90) + (ulong)*(uint *)(param_1 + 0x88) * 4 + 0xc
                             ),lVar3,lVar7);
        FUN_0077e940(param_1,lVar3,*(undefined2 *)(param_1 + 0xa4),param_2,param_3);
        (**(code **)(**(long **)(param_1 + 8) + 0x18))(*(long **)(param_1 + 8),lVar3,lVar7,8);
      }
      goto LAB_0077e890;
    }
  }
  FUN_0077e940(param_1,*(long *)(param_1 + 0x98) + (ulong)*puVar6,(short)puVar6[1],(ulong)param_2,
               param_3);
LAB_0077e890:
  return *(undefined2 *)((long)puVar6 + 6);
}


