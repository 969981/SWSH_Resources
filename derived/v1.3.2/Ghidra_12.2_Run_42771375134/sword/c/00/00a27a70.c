/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a27a70; name: FUN_00a27a70
 */


void FUN_00a27a70(long param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  
  plVar12 = *(long **)(param_1 + 8);
  FUN_00a27980();
  bVar1 = (**(code **)(**(long **)(param_1 + 0x380) + 0x9d8))();
  *(byte *)(param_1 + 0x23a) = ~bVar1 & 1;
  cVar2 = FUN_009141c0(param_2);
  if (cVar2 != '\0') {
    uVar13 = 0;
    do {
      uVar7 = FUN_00914330(param_2,uVar13 & 0xffffffff);
      lVar10 = param_1 + uVar13;
      *(undefined1 *)(lVar10 + 0x228) = 0;
      uVar3 = FUN_008e0a00();
      iVar4 = (**(code **)(**(long **)(param_1 + 0x380) + 0x740))(*(long **)(param_1 + 0x380),uVar3)
      ;
      *(undefined1 *)(lVar10 + 0x22e) = 0;
      *(bool *)(lVar10 + 0x228) = iVar4 != 0xff;
      uVar8 = FUN_008e1810(uVar7,0x13);
      if ((uVar8 & 1) != 0) {
        *(undefined1 *)(lVar10 + 0x22e) = 1;
      }
      bVar1 = FUN_008e1980(uVar7);
      *(byte *)(lVar10 + 0x234) = bVar1 & 1;
      uVar9 = FUN_008e1680(uVar7);
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar12;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      lVar11 = (**(code **)(*plVar12 + 0x10))(plVar12,0xb8,8);
      if (lVar11 == 0) {
        (**(code **)(*plVar12 + 0xb8))(plVar12);
      }
      FUN_00866320(lVar11,plVar12,uVar9);
      *(long **)(lVar11 + 8) = plVar12;
      *(long *)(lVar11 + 0x10) = lVar11;
      *(undefined8 *)(lVar11 + 0x18) = 0xb8;
      *(undefined8 *)(lVar11 + 0x20) = 8;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
      }
      uVar5 = FUN_008e12a0(uVar7,0xd);
      FUN_0087b060(lVar11,uVar5);
      uVar5 = FUN_008e12a0(uVar7,0x17);
      FUN_0087b2e0(lVar11,uVar5);
      uVar5 = FUN_008e19f0(uVar7);
      FUN_0087b570(lVar11,uVar5);
      uVar5 = FUN_008e2d10(uVar7);
      FUN_00878810(lVar11,uVar5);
      cVar2 = FUN_008e2160(uVar7);
      if (cVar2 != '\0') {
        uVar14 = 0;
        do {
          uVar5 = FUN_008e2260(uVar7,uVar14);
          FUN_0087bfb0(lVar11,uVar14,uVar5);
          uVar9 = FUN_008e1670(uVar7);
          uVar5 = FUN_0087b840(uVar9,uVar14);
          FUN_0087b860(lVar11,uVar14,uVar5);
          uVar5 = FUN_008e2500(uVar7,uVar14);
          FUN_0087b5b0(lVar11,uVar14,uVar5);
          uVar14 = uVar14 + 1;
          uVar6 = FUN_008e2160(uVar7);
        } while (uVar14 < (uVar6 & 0xff));
      }
      (**(code **)(**(long **)(param_1 + 0x200) + 0x28))(*(long **)(param_1 + 0x200),lVar11);
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
      }
      uVar13 = uVar13 + 1;
      bVar1 = FUN_009141c0(param_2);
    } while (uVar13 < bVar1);
  }
  return;
}


