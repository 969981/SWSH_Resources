/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006304e0; name: FUN_006304e0
 */


undefined8
FUN_006304e0(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
            ushort *param_5)

{
  long *plVar1;
  long *plVar2;
  ushort uVar3;
  ushort uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined2 uVar9;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  if ((*(byte *)(param_1 + 0x298) & 1) == 0) {
    local_40 = *(undefined8 *)(param_1 + 0x88);
    local_38 = *(undefined4 *)(param_1 + 0x90);
    local_50 = *(undefined8 *)(param_1 + 0xb8);
    local_48 = *(undefined8 *)(param_1 + 0xc0);
    local_60 = *(undefined8 *)(param_1 + 0xa8);
    local_58 = *(undefined8 *)(param_1 + 0xb0);
    uVar3 = *(ushort *)(param_1 + 0x94);
    uVar9 = *(undefined2 *)(param_1 + 0x96);
    lVar7 = *(long *)(param_1 + 0x98);
    lVar8 = *(long *)(param_1 + 0xa0);
    uVar4 = *(ushort *)(param_1 + 0x21c);
    if (uVar4 < uVar3) {
LAB_006305a4:
      *(undefined4 *)(param_4 + 1) = local_38;
      *param_4 = local_40;
      *(ushort *)((long)param_4 + 0xc) = uVar3;
      *(undefined2 *)((long)param_4 + 0xe) = uVar9;
      param_4[2] = lVar7;
      param_4[3] = lVar8;
      param_4[4] = local_60;
      param_4[5] = local_58;
      param_4[6] = local_50;
      param_4[7] = local_48;
      *param_5 = uVar4;
      plVar1 = (long *)(lVar8 + (ulong)uVar4 * 0x10);
      plVar2 = (long *)(lVar7 + (ulong)uVar4 * 0x10);
      uVar5 = (**(code **)(param_1 + 0x3e0))(param_1,*plVar1 - *plVar2,plVar1[1] - plVar2[1]);
      uVar6 = FUN_006024c0(uVar5,(long)*(short *)(param_1 + 0x226),*(undefined8 *)(param_1 + 0x3d0))
      ;
      *param_2 = uVar6;
      uVar5 = FUN_006024c0(uVar5,(long)*(short *)(param_1 + 0x228),*(undefined8 *)(param_1 + 0x3d0))
      ;
      *param_3 = uVar5;
      return 0;
    }
  }
  else {
    local_40 = *(undefined8 *)(param_1 + 0x48);
    local_38 = *(undefined4 *)(param_1 + 0x50);
    local_50 = *(undefined8 *)(param_1 + 0x78);
    local_48 = *(undefined8 *)(param_1 + 0x80);
    local_60 = *(undefined8 *)(param_1 + 0x68);
    local_58 = *(undefined8 *)(param_1 + 0x70);
    uVar3 = *(ushort *)(param_1 + 0x54);
    uVar9 = *(undefined2 *)(param_1 + 0x56);
    lVar7 = *(long *)(param_1 + 0x58);
    lVar8 = *(long *)(param_1 + 0x60);
    uVar4 = *(ushort *)(param_1 + 0x21a);
    if (uVar4 < uVar3) goto LAB_006305a4;
  }
  if (*(char *)(param_1 + 0x3c9) != '\0') {
    *(undefined4 *)(param_1 + 0x18) = 0x86;
  }
  *param_5 = 0;
  return 1;
}


