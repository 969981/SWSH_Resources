/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00462dd0; name: FUN_00462dd0
 */


void FUN_00462dd0(long *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  
  *param_1 = (long)(PTR_DAT_027130d0 + 0x10);
  local_68 = 0;
  local_60 = 0;
  local_50 = 0xff;
  local_58 = 0xff;
  local_48 = 0;
  local_70 = param_1;
  FUN_004a57c0(param_1 + 1,&local_70);
  puVar2 = PTR_DAT_02712a90;
  plVar3 = (long *)param_1[7];
  plVar4 = plVar3;
  if ((int)param_1[8] != 0) {
    do {
      puVar6 = (undefined8 *)*plVar4;
      if (puVar6 != (undefined8 *)0x0) {
        uVar1 = *(undefined4 *)puVar2;
        (**(code **)*puVar6)(puVar6);
        FUN_00404870(uVar1,puVar6);
      }
      plVar5 = plVar4 + 1;
      *plVar4 = 0;
      plVar3 = (long *)param_1[7];
      plVar4 = plVar5;
    } while (plVar5 != plVar3 + *(uint *)(param_1 + 8));
  }
  if (plVar3 != (long *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    if (param_1 + 5 != plVar3) {
      FUN_004047f0(*(undefined4 *)PTR_DAT_02712a90,plVar3);
    }
    param_1[7] = 0;
    *(undefined4 *)((long)param_1 + 0x44) = 0;
  }
  FUN_004a57b0(param_1 + 1);
  return;
}


