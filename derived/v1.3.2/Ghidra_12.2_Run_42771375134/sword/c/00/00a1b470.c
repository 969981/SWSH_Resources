/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a1b470; name: FUN_00a1b470
 */


void FUN_00a1b470(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  
  plVar5 = (long *)FUN_00ff93d0();
  plVar6 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0xd8,8);
  puVar3 = PTR_DAT_02710860;
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar7 + 0x80) < 0x10) {
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar5;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    lVar1 = *(long *)(param_1 + 8);
    lVar2 = *(long *)(param_1 + 0x10);
    plVar6[0xc] = 0;
    plVar6[0xd] = 0;
    puVar4 = PTR_DAT_02718e98;
    plVar6[10] = 0;
    plVar6[0xb] = 0;
    plVar6[0x10] = 0;
    plVar6[8] = 0;
    plVar6[9] = 0;
    plVar6[6] = 0;
    plVar6[7] = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    plVar6[2] = lVar2;
    plVar6[3] = 0;
    plVar6[0x19] = 0;
    plVar6[0x1a] = 0;
    plVar6[0x17] = 0;
    plVar6[0x18] = 0;
    plVar6[0x15] = 0;
    plVar6[0x16] = 0;
    plVar6[0x13] = 0;
    plVar6[0x14] = 0;
    *plVar6 = (long)(puVar4 + 0x10);
    plVar6[1] = lVar1;
    plVar6[0xe] = 0;
    plVar6[0xf] = -0x100000000;
    plVar6[0x11] = 0;
    plVar6[0x12] = 0;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    FUN_00a12030(plVar6);
    lVar7 = *(long *)(param_1 + 0x170);
    *(long **)(param_1 + 0x170) = plVar6;
    if (lVar7 != 0) {
      (**(code **)(**(long **)(param_1 + 0x178) + 0x18))
                (*(long **)(param_1 + 0x178),lVar7,*(undefined8 *)(param_1 + 0x180),
                 *(undefined8 *)(param_1 + 0x188));
    }
    *(long **)(param_1 + 0x178) = plVar5;
    *(undefined8 *)(param_1 + 0x180) = 0xd8;
    *(undefined8 *)(param_1 + 0x188) = 8;
    plVar5 = (long *)FUN_00ff93d0(param_1);
    plVar6 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0x1d0,8);
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
    if (*(ulong *)(lVar7 + 0x80) < 0x10) {
      *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar5;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      lVar1 = *(long *)(param_1 + 8);
      lVar2 = *(long *)(param_1 + 0x10);
      *(undefined8 *)((long)plVar6 + 0x76) = 0;
      plVar6[0xe] = 0;
      puVar3 = PTR_DAT_02718ea8;
      *(undefined2 *)(plVar6 + 0x24) = 0;
      plVar6[0xc] = 0;
      plVar6[0xd] = 0;
      *(undefined2 *)(plVar6 + 0x32) = 0;
      plVar6[10] = 0;
      plVar6[0xb] = 0;
      plVar6[8] = 0;
      plVar6[9] = 0;
      plVar6[0x25] = 0;
      plVar6[6] = 0;
      plVar6[7] = 0;
      *(undefined2 *)(plVar6 + 0x35) = 0;
      plVar6[0x36] = 0;
      plVar6[4] = 0;
      plVar6[5] = 0;
      plVar6[2] = lVar2;
      plVar6[3] = 0;
      plVar6[0x10] = 0;
      plVar6[0x11] = 0;
      plVar6[0x22] = 0;
      plVar6[0x23] = 0;
      plVar6[0x20] = 0;
      plVar6[0x21] = 0;
      *plVar6 = (long)(puVar3 + 0x10);
      plVar6[1] = lVar1;
      plVar6[0x1e] = 0;
      plVar6[0x1f] = 0;
      plVar6[0x1c] = 0;
      plVar6[0x1d] = 0;
      plVar6[0x1a] = 0;
      plVar6[0x1b] = 0;
      plVar6[0x18] = 0;
      plVar6[0x19] = 0;
      plVar6[0x16] = 0;
      plVar6[0x17] = 0;
      plVar6[0x14] = 0;
      plVar6[0x15] = 0;
      plVar6[0x12] = 0;
      plVar6[0x13] = 0;
      plVar6[0x30] = 0;
      plVar6[0x31] = 0;
      plVar6[0x2e] = 0;
      plVar6[0x2f] = 0;
      plVar6[0x2c] = 0;
      plVar6[0x2d] = 0;
      plVar6[0x2a] = 0;
      plVar6[0x2b] = 0;
      plVar6[0x28] = 0;
      plVar6[0x29] = 0;
      plVar6[0x26] = 0;
      plVar6[0x27] = 0;
      plVar6[0x33] = 0;
      plVar6[0x34] = 0;
      *(undefined8 *)((long)plVar6 + 0x1c5) = 0;
      plVar6[0x37] = 0;
      plVar6[0x38] = 0;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      (**(code **)(*plVar6 + 0x10))(plVar6);
      puVar8 = *(undefined8 **)(param_1 + 400);
      *(long **)(param_1 + 400) = plVar6;
      if (puVar8 != (undefined8 *)0x0) {
        (**(code **)*puVar8)(puVar8);
        (**(code **)(**(long **)(param_1 + 0x198) + 0x18))
                  (*(long **)(param_1 + 0x198),puVar8,*(undefined8 *)(param_1 + 0x1a0),
                   *(undefined8 *)(param_1 + 0x1a8));
      }
      *(long **)(param_1 + 0x198) = plVar5;
      *(undefined8 *)(param_1 + 0x1a0) = 0x1d0;
      *(undefined8 *)(param_1 + 0x1a8) = 8;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


