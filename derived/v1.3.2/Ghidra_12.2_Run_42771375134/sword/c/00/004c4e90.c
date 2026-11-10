/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c4e90; name: FUN_004c4e90
 */


void FUN_004c4e90(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_70;
  undefined1 local_68;
  undefined2 local_67;
  undefined1 local_65;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  if ((*(char *)(param_1 + 0x28) == -0x70) && (*(char *)(param_1 + 0x2b) != '\0')) {
    FUN_004c4ff0(param_1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x20),param_2,
                 param_3);
    return;
  }
  lVar3 = *(long *)(param_1 + 0x10);
  plVar4 = *(long **)(lVar3 + 0x18);
  if (plVar4 != (long *)0x0) {
    do {
      if ((int)plVar4[1] == 1) {
        local_70 = CONCAT44(local_70._4_4_,*(undefined4 *)(param_1 + 0x28));
        uVar1 = local_70;
        local_70._3_5_ = SUB85(uVar1,3);
        local_70._0_3_ =
             CONCAT12((char)plVar4[3],
                      CONCAT11(*(undefined1 *)((long)plVar4 + 0x19),
                               (char)*(undefined4 *)(param_1 + 0x28)));
        FUN_004c4ff0(param_1,plVar4[2],*(undefined8 *)(param_1 + 0x20),param_2,param_3,&local_70);
      }
      plVar4 = (long *)*plVar4;
    } while (plVar4 != (long *)0x0);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  for (plVar4 = *(long **)(lVar3 + 0x40); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    if (*(int *)(plVar4 + 1) != 1) {
      local_48 = plVar4[2];
      plVar2 = *(long **)(local_48 + 0x160);
      if (plVar2 != (long *)0x0) {
        local_68 = *(undefined1 *)(param_1 + 0x28);
        local_65 = *(undefined1 *)(param_1 + 0x2b);
        local_67 = *(undefined2 *)(local_48 + 0x29d);
        local_60 = *(undefined8 *)(local_48 + 0x2a0);
        local_58 = *(undefined4 *)(local_48 + 0x38);
        local_50 = *(undefined4 *)(param_1 + 0x2c);
        uStack_4c = 3;
        local_54 = *(undefined4 *)(param_3 + 0x14);
        local_70 = param_2;
        (**(code **)(*plVar2 + 0x148))(plVar2,&local_70,local_48 + 0x68,1);
      }
    }
  }
  return;
}


