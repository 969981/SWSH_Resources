/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004bc330; name: FUN_004bc330
 */


void FUN_004bc330(long param_1,undefined8 *param_2,uint param_3,undefined8 param_4)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  
  if (param_3 < *(uint *)(param_1 + 0x18)) {
    uVar2 = *(uint *)(param_1 + 0x30);
    if (uVar2 != 0) {
      puVar3 = *(undefined8 **)(param_1 + 0x28);
      puVar4 = puVar3;
      do {
        if ((*(char *)((long)*puVar4 + 0x14) != '\0') &&
           (plVar1 = *(long **)*puVar4, plVar1 != (long *)0x0)) {
          local_70 = *param_2;
          local_68 = 0;
          local_60 = 0;
          local_58 = 0xff;
          local_50 = 0xff;
          local_48 = 0;
          (**(code **)(*plVar1 + 0x10))
                    (plVar1,*(undefined4 *)(*(long *)(param_1 + 0x10) + (ulong)param_3 * 4),
                     &local_70,param_4);
          puVar3 = *(undefined8 **)(param_1 + 0x28);
          uVar2 = *(uint *)(param_1 + 0x30);
        }
        puVar4 = puVar4 + 1;
      } while (puVar4 != puVar3 + uVar2);
    }
  }
  return;
}


