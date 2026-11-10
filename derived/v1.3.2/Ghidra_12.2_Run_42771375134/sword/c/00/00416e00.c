/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00416e00; name: FUN_00416e00
 */


uint FUN_00416e00(long param_1,long *param_2,char *param_3)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int local_48;
  uint local_44;
  
  lVar6 = *param_2;
  if (*(uint *)(lVar6 + 0x30) < 2) {
    *param_3 = '\0';
    if ((*(uint *)(*param_2 + 0x30) | 2) == 3) {
      lVar4 = FUN_004164b0();
    }
    else {
      lVar4 = param_2[2];
    }
    if (lVar4 != 0) {
      lVar5 = *param_2;
      if (((*(byte *)(param_1 + 0x40) & 1) != 0) && (*(long *)(lVar5 + 0x38) == lVar4)) {
        FUN_00418070(param_1,lVar5,lVar4);
      }
      if ((short)*(ushort *)(lVar4 + 10) + 1 != *(int *)(lVar5 + 0x28)) {
        uVar3 = *(ushort *)(lVar4 + 10) + 1;
        *(short *)(lVar4 + 10) = (short)uVar3;
        goto joined_r0x00416f4c;
      }
      *(undefined2 *)(lVar4 + 10) = 0;
      if ((*(byte *)((long)param_2 + 10) & 1) != 0) {
        if ((*(byte *)((long)param_2 + 10) >> 1 & 1) != 0) goto LAB_00416f54;
        sVar2 = (short)param_2[1] + -1;
        *(short *)(param_2 + 1) = sVar2;
        if (sVar2 != 0) {
          uVar3 = (uint)*(ushort *)(lVar4 + 10);
          goto joined_r0x00416f4c;
        }
      }
    }
    uVar3 = 0;
    *param_3 = '\x01';
  }
  else {
    if (*(uint *)(lVar6 + 0x30) - 2 < 2) {
      uVar3 = FUN_00417b70(param_1,param_2,param_3);
      goto joined_r0x00416f4c;
    }
LAB_00416f54:
    uVar3 = 0;
  }
joined_r0x00416f4c:
  local_44 = uVar3;
  if ((lVar6 != 0) && (*param_3 == '\0')) {
    local_44 = uVar3 & 0xffff;
    uVar1 = *(uint *)(lVar6 + 0x28);
    local_48 = 0;
    FUN_0048f300(*(undefined8 *)PTR_DAT_02712ad0,*(undefined4 *)(param_1 + 8),
                 *(undefined4 *)(lVar6 + 0x10),uVar1,&local_44,&local_48);
    if (uVar1 <= local_44) {
      local_44 = uVar3;
    }
    *param_3 = local_48 != 0;
  }
  return local_44;
}


