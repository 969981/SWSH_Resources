/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b9c10; name: FUN_004b9c10
 */


undefined8 FUN_004b9c10(long param_1,undefined4 param_2,long *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulong uVar7;
  long local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined1 local_60;
  undefined8 local_58;
  
  puVar1 = PTR_DAT_02712a90;
  if (*param_3 == 0) {
    if (*(int *)(param_1 + 0x150) == 0) {
      FUN_004992b0(*(undefined8 *)PTR_DAT_02712d20,*(undefined4 *)(param_1 + 0x10),0);
    }
    else {
      puVar2 = (undefined8 *)
               FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,*(int *)(param_1 + 0x150) << 3);
      if (puVar2 == (undefined8 *)0x0) {
        return 2;
      }
      plVar4 = *(long **)(param_1 + 0x158);
      if (plVar4 != (long *)0x0) {
        if (param_4 == (undefined8 *)0x0) {
          uVar7 = 0;
          do {
            puVar2[uVar7] = plVar4[4];
            plVar4 = (long *)*plVar4;
            uVar6 = (int)uVar7 + 1;
            uVar7 = (ulong)uVar6;
          } while (plVar4 != (long *)0x0);
        }
        else {
          uVar7 = 0;
          do {
            local_80 = plVar4[4];
            local_78 = 0;
            local_70 = 0;
            local_68 = 0xff;
            local_60 = 0xff;
            local_58 = 0;
            uVar3 = (**(code **)*param_4)(param_4,&local_80);
            if ((uVar3 & 1) == 0) {
              puVar2[uVar7] = plVar4[4];
              uVar7 = (ulong)((int)uVar7 + 1);
            }
            uVar6 = (uint)uVar7;
            plVar4 = (long *)*plVar4;
          } while (plVar4 != (long *)0x0);
        }
        if (uVar6 != 0) {
          uVar7 = (ulong)uVar6;
          puVar5 = puVar2;
          do {
            FUN_004ba350(param_1,param_2,*puVar5);
            uVar7 = uVar7 - 1;
            puVar5 = puVar5 + 1;
          } while (uVar7 != 0);
        }
      }
      FUN_00404870(*(undefined4 *)puVar1,puVar2);
    }
  }
  else {
    FUN_004ba350(param_1,param_2);
  }
  return 1;
}


