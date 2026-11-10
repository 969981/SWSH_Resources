/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ea6a0; name: FUN_004ea6a0
 */


undefined8 FUN_004ea6a0(long *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  
  puVar3 = PTR_DAT_02713640;
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  lVar4 = FUN_00404690(*(undefined4 *)PTR_DAT_02713640,(ulong)uVar1 * 0x110);
  uVar5 = 0;
  if (lVar4 != 0) {
    lVar6 = *param_1;
    if ((lVar6 != 0) && (lVar6 != lVar4)) {
      uVar7 = (ulong)*(uint *)(param_1 + 1);
      if (*(uint *)(param_1 + 1) != 0) {
        lVar6 = 0;
        do {
          if ((void *)(lVar4 + lVar6) != (void *)0x0) {
            puVar2 = (undefined8 *)(lVar4 + lVar6);
            puVar2[8] = 0xffffffffffffffff;
            puVar2[9] = 0;
            puVar2[10] = 0x3f800000;
            puVar2[0xb] = 0xffffffffffffffff;
            puVar2[0x20] = &DAT_7f7fffff00000000;
            *(undefined4 *)(puVar2 + 0x21) = 0x3f800000;
            *puVar2 = 0;
            puVar2[0xc] = 0;
            puVar2[0xd] = 0x3f800000;
            puVar2[0xe] = 0xffffffffffffffff;
            puVar2[0xf] = 0;
            puVar2[0x10] = 0x3f800000;
            puVar2[0x11] = 0xffffffffffffffff;
            puVar2[0x12] = 0;
            puVar2[0x13] = 0x3f800000;
            puVar2[0x14] = 0xffffffffffffffff;
            puVar2[0x15] = 0;
            puVar2[0x16] = 0x3f800000;
            puVar2[0x17] = 0xffffffffffffffff;
            puVar2[0x18] = 0;
            puVar2[0x19] = 0x3f800000;
            puVar2[0x1a] = 0xffffffffffffffff;
            puVar2[0x1b] = 0;
            puVar2[0x1c] = 0x3f800000;
            puVar2[0x1d] = 0xffffffffffffffff;
            puVar2[0x1e] = 0;
            puVar2[0x1f] = 0x3f800000;
          }
          memcpy((void *)(lVar4 + lVar6),(void *)(*param_1 + lVar6),0x10c);
          lVar6 = lVar6 + 0x110;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
        lVar6 = *param_1;
      }
      FUN_00404870(*(undefined4 *)puVar3,lVar6);
    }
    uVar5 = 1;
    *param_1 = lVar4;
    *(uint *)((long)param_1 + 0xc) = uVar1;
  }
  return uVar5;
}


