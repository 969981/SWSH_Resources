/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048ae80; name: FUN_0048ae80
 */


undefined4 FUN_0048ae80(undefined8 param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_2 != 0) {
    return 2;
  }
  if ((char)param_2[0xb] != '\0') {
    FUN_00489ab0(param_2);
    return 2;
  }
  lVar4 = *(long *)(param_3 + 2);
  if (lVar4 != 0) {
    plVar3 = *(long **)(param_2 + 4);
    if (plVar3 != (long *)0x0) {
      if (*(ushort *)(plVar3 + 2) - 1 == 0) {
        if (*plVar3 != 0) {
          *(undefined4 *)(plVar3 + 1) = 0;
          FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
          *plVar3 = 0;
          *(undefined4 *)((long)plVar3 + 0xc) = 0;
        }
        FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,plVar3);
      }
      else {
        *(short *)(plVar3 + 2) = (short)(*(ushort *)(plVar3 + 2) - 1);
      }
    }
    *(long *)(param_2 + 4) = lVar4;
    *(short *)(lVar4 + 0x10) = *(short *)(lVar4 + 0x10) + 1;
    uVar1 = *param_3;
    *(short *)(param_2 + 8) = (short)uVar1;
    *(ulong *)(param_2 + 6) = *(long *)(param_2 + 2) + ((ulong)uVar1 & 0xffff) * 0x18;
  }
  uVar2 = FUN_00489780(param_2,*(undefined4 *)(*(long *)PTR_DAT_02712de0 + 0x78));
  if ((*(byte *)(param_2 + 10) >> 1 & 1) != 0) {
    return uVar2;
  }
  FUN_00489d80(param_2);
  *param_3 = (uint)*(ushort *)(param_2 + 8);
  lVar4 = *(long *)(param_2 + 4);
  plVar3 = *(long **)(param_3 + 2);
  if (plVar3 != (long *)0x0) {
    if (*(ushort *)(plVar3 + 2) - 1 == 0) {
      if (*plVar3 != 0) {
        *(undefined4 *)(plVar3 + 1) = 0;
        FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
        *plVar3 = 0;
        *(undefined4 *)((long)plVar3 + 0xc) = 0;
      }
      FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,plVar3);
      *(long *)(param_3 + 2) = lVar4;
      goto joined_r0x0048afe8;
    }
    *(short *)(plVar3 + 2) = (short)(*(ushort *)(plVar3 + 2) - 1);
  }
  *(long *)(param_3 + 2) = lVar4;
joined_r0x0048afe8:
  if (lVar4 == 0) {
    return uVar2;
  }
  *(short *)(lVar4 + 0x10) = *(short *)(lVar4 + 0x10) + 1;
  return uVar2;
}


