/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c1590; name: FUN_009c1590
 */


void FUN_009c1590(long param_1,long param_2)

{
  byte bVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 uVar4;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/btl_cmd_out/data/btl_cmd_data_holder.pb.cc"
                 ,0x1ea);
  }
  switch(*(undefined4 *)(param_2 + 0x24)) {
  case 1:
    break;
  case 2:
    switch(*(undefined4 *)(param_1 + 0x24)) {
    case 1:
    case 3:
    case 4:
    case 5:
      if (*(long **)(param_1 + 0x18) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x18) + 8))();
      }
      break;
    case 2:
      pvVar2 = *(void **)(param_1 + 0x18);
      goto LAB_009c1858;
    }
    *(undefined4 *)(param_1 + 0x24) = 2;
    pvVar2 = operator_new(0x18);
    FUN_009bd410();
    *(void **)(param_1 + 0x18) = pvVar2;
    if (*(int *)(param_2 + 0x24) == 2) {
LAB_009c1858:
      pvVar3 = *(void **)(param_2 + 0x18);
    }
    else {
      pvVar3 = (void *)FUN_009bd530();
    }
    if (pvVar3 == pvVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/btl_cmd_out/data/battle_command.pb.cc"
                   ,0x2ce);
    }
    return;
  case 3:
    switch(*(undefined4 *)(param_1 + 0x24)) {
    case 1:
    case 2:
    case 4:
    case 5:
      if (*(long **)(param_1 + 0x18) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x18) + 8))();
      }
      break;
    case 3:
      pvVar2 = *(void **)(param_1 + 0x18);
      goto LAB_009c183c;
    }
    *(undefined4 *)(param_1 + 0x24) = 3;
    pvVar2 = operator_new(0x20);
    FUN_009baec0();
    *(void **)(param_1 + 0x18) = pvVar2;
    if (*(int *)(param_2 + 0x24) == 3) {
LAB_009c183c:
      pvVar3 = *(void **)(param_2 + 0x18);
    }
    else {
      pvVar3 = (void *)FUN_009baff0();
    }
    if (pvVar3 == pvVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/btl_cmd_out/data/raid_action_command.pb.cc"
                   ,0x14e);
    }
    if (*(int *)((long)pvVar3 + 0x14) != 0) {
      *(int *)((long)pvVar2 + 0x14) = *(int *)((long)pvVar3 + 0x14);
    }
    if (*(int *)((long)pvVar3 + 0x18) != 0) {
      *(int *)((long)pvVar2 + 0x18) = *(int *)((long)pvVar3 + 0x18);
    }
    return;
  case 4:
    switch(*(undefined4 *)(param_1 + 0x24)) {
    case 1:
    case 2:
    case 3:
    case 5:
      if (*(long **)(param_1 + 0x18) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x18) + 8))();
      }
      break;
    case 4:
      pvVar2 = *(void **)(param_1 + 0x18);
      goto LAB_009c1874;
    }
    *(undefined4 *)(param_1 + 0x24) = 4;
    pvVar2 = operator_new(0x20);
    FUN_009c2b00();
    *(void **)(param_1 + 0x18) = pvVar2;
    if (*(int *)(param_2 + 0x24) == 4) {
LAB_009c1874:
      uVar4 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      uVar4 = FUN_009c2c30();
    }
    FUN_009c2b20(pvVar2,uVar4);
    return;
  case 5:
    switch(*(undefined4 *)(param_1 + 0x24)) {
    case 1:
    case 2:
    case 3:
    case 4:
      if (*(long **)(param_1 + 0x18) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x18) + 8))();
      }
      break;
    case 5:
      pvVar2 = *(void **)(param_1 + 0x18);
      goto LAB_009c1804;
    }
    *(undefined4 *)(param_1 + 0x24) = 5;
    pvVar2 = operator_new(0x20);
    FUN_009c0980();
    *(void **)(param_1 + 0x18) = pvVar2;
    if (*(int *)(param_2 + 0x24) == 5) {
LAB_009c1804:
      pvVar3 = *(void **)(param_2 + 0x18);
    }
    else {
      pvVar3 = (void *)FUN_009c0aa0();
    }
    if (pvVar3 == pvVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/btl_cmd_out/data/trainer_action_command.pb.cc"
                   ,0x117);
    }
    if (*(int *)((long)pvVar3 + 0x14) != 0) {
      *(int *)((long)pvVar2 + 0x14) = *(int *)((long)pvVar3 + 0x14);
    }
    return;
  default:
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x24)) {
  case 1:
    pvVar2 = *(void **)(param_1 + 0x18);
    goto LAB_009c1820;
  case 2:
  case 3:
  case 4:
  case 5:
    if (*(long **)(param_1 + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 1;
  pvVar2 = operator_new(0x30);
  FUN_009bc810();
  *(void **)(param_1 + 0x18) = pvVar2;
  if (*(int *)(param_2 + 0x24) == 1) {
LAB_009c1820:
    pvVar3 = *(void **)(param_2 + 0x18);
  }
  else {
    pvVar3 = (void *)FUN_009bca80();
  }
  if (pvVar3 == pvVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/btl_cmd_out/data/battle_command.pb.cc"
                 ,0x1b2);
  }
  if (*(int *)((long)pvVar3 + 0x14) != 0) {
    *(int *)((long)pvVar2 + 0x14) = *(int *)((long)pvVar3 + 0x14);
  }
  if (*(int *)((long)pvVar3 + 0x18) != 0) {
    *(int *)((long)pvVar2 + 0x18) = *(int *)((long)pvVar3 + 0x18);
  }
  if (*(int *)((long)pvVar3 + 0x28) != 0) {
    *(int *)((long)pvVar2 + 0x28) = *(int *)((long)pvVar3 + 0x28);
  }
  bVar1 = **(byte **)((long)pvVar3 + 0x20);
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(*(byte **)((long)pvVar3 + 0x20) + 8) == 0) {
    return;
  }
  FUN_00860e40((long)pvVar2 + 0x20,*(undefined8 *)PTR_DAT_02716d10);
  return;
}


