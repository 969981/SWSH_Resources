/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004bc240; name: FUN_004bc240
 */


bool FUN_004bc240(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xff;
  local_50 = 0xff;
  local_48 = 0;
  local_70 = param_3;
  puVar1 = (undefined4 *)FUN_0049c8e0(param_1 + 0x38,&local_70);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar3 = *(uint *)(param_1 + 0x30);
    if (uVar3 != 0) {
      puVar4 = *(undefined8 **)(param_1 + 0x28);
      puVar5 = puVar4;
      do {
        if ((*(char *)((long)*puVar5 + 0x14) != '\0') &&
           (plVar2 = *(long **)*puVar5, plVar2 != (long *)0x0)) {
          local_68 = 0;
          local_60 = 0;
          local_58 = 0xff;
          local_50 = 0xff;
          local_48 = 0;
          local_70 = param_3;
          (**(code **)(*plVar2 + 0x10))(plVar2,param_2,&local_70,0);
          puVar4 = *(undefined8 **)(param_1 + 0x28);
          uVar3 = *(uint *)(param_1 + 0x30);
        }
        puVar5 = puVar5 + 1;
      } while (puVar5 != puVar4 + uVar3);
    }
  }
  return puVar1 != (undefined4 *)0x0;
}


