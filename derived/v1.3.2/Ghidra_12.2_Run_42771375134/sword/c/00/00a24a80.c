/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a24a80; name: FUN_00a24a80
 */


void FUN_00a24a80(long *param_1,uint param_2,int param_3,int param_4)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  long lStack_70;
  int local_68;
  byte local_64;
  
  lVar1 = *param_1;
  uVar12 = (ulong)param_2;
  lVar8 = (**(code **)(*(long *)param_1[1] + 0x7f8))();
  lVar13 = *(long *)(lVar1 + (long)param_3 * 0x20 + 0x5d8);
  if (param_4 == 5) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)(lVar1 + 0x718) + (long)param_4 * 0x188;
  }
  lVar14 = *(long *)(lVar1 + 0x6d8) + (long)param_3 * 0xb0;
  lVar10 = lVar1 + uVar12 * 0x18;
  *(long *)(lVar10 + 0x740) = lVar13;
  *(long *)(lVar10 + 0x748) = lVar14;
  *(long *)(lVar10 + 0x750) = lVar11;
  if (lVar8 == 0) {
    if (*(char *)(lVar13 + 0x7c) != '\0') {
      *(undefined1 *)(lVar13 + 0x7c) = 0;
      *(byte *)(*(long *)(lVar13 + 0x80) + 0x58) = *(byte *)(*(long *)(lVar13 + 0x80) + 0x58) & 0xfe
      ;
    }
    if ((lVar11 != 0) && (*(char *)(lVar11 + 0x7c) != '\0')) {
      *(undefined1 *)(lVar11 + 0x7c) = 0;
      *(byte *)(*(long *)(lVar11 + 0x80) + 0x58) = *(byte *)(*(long *)(lVar11 + 0x80) + 0x58) & 0xfe
      ;
    }
  }
  else {
    if ((*(char *)((long)param_1 + 0x14) == '\0') && (*(char *)((long)param_1 + 0x15) == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = param_2 == 1;
    }
    iVar5 = (**(code **)(*(long *)param_1[1] + 0x868))();
    if (iVar5 == 0) {
      uVar6 = (**(code **)(*(long *)param_1[1] + 0x980))((long *)param_1[1],lVar8);
    }
    else {
      uVar6 = 0;
    }
    local_88 = *(undefined8 *)(lVar1 + 0x5d0);
    local_68 = (int)param_1[2];
    local_80 = *(undefined8 *)(lVar1 + 0x738);
    local_78 = param_1[1];
    if (local_68 == 0) {
      local_68 = 1;
    }
    lStack_70 = lVar8;
    bVar3 = FUN_00a0a290(0);
    bVar4 = FUN_00a0a290(uVar12);
    local_64 = (bVar3 ^ bVar4) & 1;
    if (*(char *)(lVar13 + 0x7c) == '\0') {
      *(undefined1 *)(lVar13 + 0x7c) = 1;
    }
    FUN_00a11240(lVar13,bVar2);
    FUN_00a10760(lVar13,&local_88);
    FUN_00a11250(lVar13,uVar6 & 1);
    FUN_00a1b110(lVar14,param_1[1],uVar12,0);
    if (lVar11 != 0) {
      uVar7 = (**(code **)(*(long *)param_1[1] + 0x8e8))((long *)param_1[1],param_2);
      if (*(char *)(lVar11 + 0x7c) == '\0') {
        *(undefined1 *)(lVar11 + 0x7c) = 1;
      }
      bVar3 = FUN_00a0a320(param_1[1],param_2);
      *(byte *)(lVar11 + 0x181) = bVar3 & 1;
      uVar9 = (**(code **)(*(long *)param_1[1] + 0x830))((long *)param_1[1],uVar7);
      FUN_00a25ea0(lVar11,uVar9);
    }
  }
  return;
}


