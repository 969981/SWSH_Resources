/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011b58c0; name: FUN_011b58c0
 */


void FUN_011b58c0(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  char cVar2;
  byte bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined2 uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  bool bVar13;
  
  puVar1 = PTR_DAT_02710798;
  lVar10 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
  if (lVar10 == 0) {
    lVar12 = 0;
LAB_011b5930:
    bVar13 = true;
  }
  else {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    lVar12 = *(long *)(*(long *)puVar1 + 0x1e8);
    if (lVar12 == 0) goto LAB_011b5930;
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
    bVar13 = false;
  }
  cVar2 = FUN_01524c00(lVar12);
  if ((byte)(cVar2 - 2U) < 9) {
    lVar5 = *(long *)(&DAT_02167650 + (long)(char)(cVar2 - 2U) * 8);
  }
  else {
    lVar5 = 0;
  }
  lVar5 = param_3 + lVar5 * 0x1c;
  cVar2 = *(char *)(lVar5 + 0x4a);
  if (!bVar13) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  *(undefined2 *)(param_2 + 0x30) = *(undefined2 *)(param_3 + 0x240);
  *(ushort *)(param_2 + 0x32) = (ushort)*(byte *)(param_3 + 0x242);
  *(undefined1 *)(param_2 + 100) = *(undefined1 *)(param_3 + 0x243);
  *(undefined1 *)(param_2 + 99) = *(undefined1 *)(param_3 + 0x25c);
  *(undefined2 *)(param_2 + 0x10) = *(undefined2 *)(param_3 + 0x22e);
  *(undefined1 *)(param_2 + 0x12) = *(undefined1 *)(param_3 + 0x245);
  if (*(short *)(lVar5 + 300) == 0) {
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = param_1;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    lVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x80,8);
    if (lVar5 == 0) {
      (**(code **)(*param_1 + 0xb8))(param_1);
    }
    FUN_0077d050(lVar5,0x20);
    *(long **)(lVar5 + 8) = param_1;
    *(long *)(lVar5 + 0x10) = lVar5;
    *(undefined8 *)(lVar5 + 0x18) = 0x80;
    *(undefined8 *)(lVar5 + 0x20) = 8;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    if (lVar5 != 0) {
      plVar11 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar11 + 0x10))(plVar11);
      FUN_01524b90(lVar10,lVar5);
      puVar4 = (undefined8 *)FUN_0077d470(lVar5);
      uVar6 = *puVar4;
      uVar7 = puVar4[1];
      uVar8 = puVar4[2];
      *(undefined2 *)(param_2 + 0x60) = *(undefined2 *)(puVar4 + 3);
      *(undefined8 *)(param_2 + 0x48) = uVar6;
      *(undefined8 *)(param_2 + 0x50) = uVar7;
      *(undefined8 *)(param_2 + 0x58) = uVar8;
      (**(code **)(*plVar11 + 0x18))(plVar11);
      bVar3 = *(byte *)(param_3 + 0x272);
      goto joined_r0x011b5b30;
    }
    FUN_01524b90(lVar10,0);
    puVar4 = (undefined8 *)FUN_0077d470(0);
    uVar6 = *puVar4;
    uVar7 = puVar4[1];
    uVar8 = puVar4[2];
    uVar9 = *(undefined2 *)(puVar4 + 3);
  }
  else {
    uVar6 = *(undefined8 *)(lVar5 + 300);
    uVar7 = *(undefined8 *)(lVar5 + 0x134);
    uVar8 = *(undefined8 *)(lVar5 + 0x13c);
    uVar9 = *(undefined2 *)(lVar5 + 0x144);
  }
  *(undefined2 *)(param_2 + 0x60) = uVar9;
  *(undefined8 *)(param_2 + 0x50) = uVar7;
  *(undefined8 *)(param_2 + 0x58) = uVar8;
  *(undefined8 *)(param_2 + 0x48) = uVar6;
  bVar3 = *(byte *)(param_3 + 0x272);
joined_r0x011b5b30:
  if (1 < bVar3) {
    bVar3 = FUN_01524bf0(lVar10);
  }
  *(byte *)(param_2 + 0x34) = bVar3;
  if (cVar2 == '\0') {
    cVar2 = FUN_01524c00(lVar10);
  }
  *(char *)(param_2 + 0x62) = cVar2;
  *(uint *)(param_2 + 0x38) = (uint)*(ushort *)(param_3 + 0x230);
  *(uint *)(param_2 + 0x3c) = (uint)*(ushort *)(param_3 + 0x232);
  *(uint *)(param_2 + 0x40) = (uint)*(ushort *)(param_3 + 0x234);
  *(uint *)(param_2 + 0x44) = (uint)*(ushort *)(param_3 + 0x236);
  if (lVar10 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x011b5a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  return;
}


