/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00450d00; name: FUN_00450d00
 */


undefined8 FUN_00450d00(long *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  
  puVar3 = PTR_DAT_02712a90;
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  lVar4 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar1 * 0x60);
  uVar5 = 0;
  if (lVar4 != 0) {
    lVar6 = *param_1;
    if ((lVar6 != 0) && (lVar6 != lVar4)) {
      uVar7 = (ulong)*(uint *)(param_1 + 1);
      if (*(uint *)(param_1 + 1) != 0) {
        lVar6 = 0;
        do {
          if ((void *)(lVar4 + lVar6) != (void *)0x0) {
            lVar2 = lVar4 + lVar6;
            *(undefined8 *)(lVar2 + 0x24) = 0;
            *(undefined8 *)(lVar2 + 0x2c) = 0x3f80000000000000;
            *(undefined8 *)(lVar2 + 0x34) = 0x3f8000003f800000;
            *(undefined8 *)(lVar2 + 0x44) = 0;
            *(undefined8 *)(lVar2 + 0x3c) = 0;
            *(undefined4 *)(lVar2 + 0x4c) = 0xffffffff;
            *(undefined8 *)(lVar2 + 0x50) = 0;
            *(undefined8 *)(lVar2 + 0x58) = 0x3f8000003f800000;
          }
          memcpy((void *)(lVar4 + lVar6),(void *)(*param_1 + lVar6),0x60);
          lVar6 = lVar6 + 0x60;
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


