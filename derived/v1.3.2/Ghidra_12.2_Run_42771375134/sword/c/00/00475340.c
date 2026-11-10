/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00475340; name: FUN_00475340
 */


undefined8 FUN_00475340(long *param_1,undefined4 param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  puVar3 = PTR_DAT_02712a90;
  do {
    if (param_1 == (long *)0x0) {
      return 1;
    }
    uVar2 = *(uint *)(param_1 + 5);
    if (*(uint *)((long)param_1 + 0x2c) < uVar2) {
      if (param_1[6] != 0) {
        FUN_004047f0(*(undefined4 *)puVar3);
        uVar2 = *(uint *)(param_1 + 5);
      }
      *(undefined4 *)((long)param_1 + 0x2c) = 0;
      param_1[6] = 0;
      lVar4 = FUN_00404750(*(undefined4 *)puVar3,(ulong)uVar2 << 2,0x10);
      param_1[6] = lVar4;
      if (lVar4 == 0) {
        return 2;
      }
      *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)(param_1 + 5);
    }
    if (*(uint *)(param_1 + 2) != 0) {
      lVar4 = param_1[1];
      lVar6 = lVar4 + (ulong)*(uint *)(param_1 + 2) * 0x58;
      lVar5 = param_1[6];
      plVar7 = (long *)param_1[3];
      do {
        *plVar7 = lVar5;
        FUN_00475870(lVar4,param_2,plVar7,lVar5);
        puVar1 = (uint *)(lVar4 + 0x14);
        lVar4 = lVar4 + 0x58;
        lVar5 = lVar5 + (ulong)*puVar1 * 4;
        plVar7 = plVar7 + 7;
      } while (lVar4 != lVar6);
    }
    param_1 = (long *)*param_1;
  } while( true );
}


