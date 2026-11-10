/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009d8d00; name: FUN_009d8d00
 */


void FUN_009d8d00(long param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  void *pvVar3;
  void *pvVar4;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffers/out_async/data/btlwatch_async_data_holder.pb.cc"
                 ,0x272);
  }
  switch(*(undefined4 *)(param_2 + 0x24)) {
  case 1:
    if (*(int *)(param_1 + 0x24) == 1) {
      pvVar4 = *(void **)(param_1 + 0x18);
      uVar2 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      FUN_009d91b0(param_1);
      *(undefined4 *)(param_1 + 0x24) = 1;
      pvVar4 = operator_new(0x78);
      FUN_009db360();
      *(void **)(param_1 + 0x18) = pvVar4;
      if (*(int *)(param_2 + 0x24) == 1) {
        uVar2 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        uVar2 = FUN_009db790();
      }
    }
    FUN_009db410(pvVar4,uVar2);
    return;
  case 2:
    if (*(int *)(param_1 + 0x24) == 2) {
      pvVar4 = *(void **)(param_1 + 0x18);
      pvVar3 = *(void **)(param_2 + 0x18);
    }
    else {
      FUN_009d91b0(param_1);
      *(undefined4 *)(param_1 + 0x24) = 2;
      pvVar4 = operator_new(0x28);
      FUN_009d5980();
      *(void **)(param_1 + 0x18) = pvVar4;
      if (*(int *)(param_2 + 0x24) == 2) {
        pvVar3 = *(void **)(param_2 + 0x18);
      }
      else {
        pvVar3 = (void *)FUN_009d5bc0();
      }
    }
    if (pvVar3 == pvVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffers/out_async/data/watch_clienttimer.pb.cc"
                   ,0x13f);
    }
    if (*(int *)((long)pvVar3 + 0x20) != 0) {
      *(int *)((long)pvVar4 + 0x20) = *(int *)((long)pvVar3 + 0x20);
    }
    bVar1 = **(byte **)((long)pvVar3 + 0x18);
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0) {
        return;
      }
    }
    else if (*(long *)(*(byte **)((long)pvVar3 + 0x18) + 8) == 0) {
      return;
    }
    FUN_00860e40((long)pvVar4 + 0x18,*(undefined8 *)PTR_DAT_02716d10);
    return;
  case 3:
    if (*(int *)(param_1 + 0x24) == 3) {
      pvVar4 = *(void **)(param_1 + 0x18);
      pvVar3 = *(void **)(param_2 + 0x18);
    }
    else {
      FUN_009d91b0(param_1);
      *(undefined4 *)(param_1 + 0x24) = 3;
      pvVar4 = operator_new(0x30);
      FUN_009d3c10();
      *(void **)(param_1 + 0x18) = pvVar4;
      if (*(int *)(param_2 + 0x24) == 3) {
        pvVar3 = *(void **)(param_2 + 0x18);
      }
      else {
        pvVar3 = (void *)FUN_009d3e80();
      }
    }
    if (pvVar3 == pvVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffers/out_async/data/watch_command.pb.cc"
                   ,0x19b);
    }
    if (*(int *)((long)pvVar3 + 0x14) != 0) {
      *(int *)((long)pvVar4 + 0x14) = *(int *)((long)pvVar3 + 0x14);
    }
    if (*(int *)((long)pvVar3 + 0x18) != 0) {
      *(int *)((long)pvVar4 + 0x18) = *(int *)((long)pvVar3 + 0x18);
    }
    if (*(int *)((long)pvVar3 + 0x28) != 0) {
      *(int *)((long)pvVar4 + 0x28) = *(int *)((long)pvVar3 + 0x28);
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
    FUN_00860e40((long)pvVar4 + 0x20,*(undefined8 *)PTR_DAT_02716d10);
    return;
  case 4:
    break;
  case 5:
    if (*(int *)(param_1 + 0x24) == 5) {
      pvVar4 = *(void **)(param_1 + 0x18);
      uVar2 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      FUN_009d91b0(param_1);
      *(undefined4 *)(param_1 + 0x24) = 5;
      pvVar4 = operator_new(0x20);
      FUN_009da670();
      *(void **)(param_1 + 0x18) = pvVar4;
      if (*(int *)(param_2 + 0x24) == 5) {
        uVar2 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        uVar2 = FUN_009da7a0();
      }
    }
    FUN_009da690(pvVar4,uVar2);
    return;
  case 6:
    if (*(int *)(param_1 + 0x24) == 6) {
      pvVar4 = *(void **)(param_1 + 0x18);
      pvVar3 = *(void **)(param_2 + 0x18);
    }
    else {
      FUN_009d91b0(param_1);
      *(undefined4 *)(param_1 + 0x24) = 6;
      pvVar4 = operator_new(0x28);
      FUN_009d6700();
      *(void **)(param_1 + 0x18) = pvVar4;
      if (*(int *)(param_2 + 0x24) == 6) {
        pvVar3 = *(void **)(param_2 + 0x18);
      }
      else {
        pvVar3 = (void *)FUN_009d6950();
      }
    }
    if (pvVar3 == pvVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffers/out_async/data/watch_target_party.pb.cc"
                   ,0x11b);
    }
    bVar1 = **(byte **)((long)pvVar3 + 0x18);
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0) {
        return;
      }
    }
    else if (*(long *)(*(byte **)((long)pvVar3 + 0x18) + 8) == 0) {
      return;
    }
    FUN_00860e40((long)pvVar4 + 0x18,*(undefined8 *)PTR_DAT_02716d10);
    return;
  case 7:
    if (*(int *)(param_1 + 0x24) == 7) {
      pvVar4 = *(void **)(param_1 + 0x18);
      pvVar3 = *(void **)(param_2 + 0x18);
    }
    else {
      FUN_009d91b0(param_1);
      *(undefined4 *)(param_1 + 0x24) = 7;
      pvVar4 = operator_new(0x20);
      FUN_009d2f30();
      *(void **)(param_1 + 0x18) = pvVar4;
      if (*(int *)(param_2 + 0x24) == 7) {
        pvVar3 = *(void **)(param_2 + 0x18);
      }
      else {
        pvVar3 = (void *)FUN_009d3060();
      }
    }
    if (pvVar3 == pvVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffers/out_async/data/watch_timer.pb.cc"
                   ,0x14f);
    }
    if (*(int *)((long)pvVar3 + 0x14) != 0) {
      *(int *)((long)pvVar4 + 0x14) = *(int *)((long)pvVar3 + 0x14);
    }
    if (*(int *)((long)pvVar3 + 0x18) != 0) {
      *(int *)((long)pvVar4 + 0x18) = *(int *)((long)pvVar3 + 0x18);
    }
    return;
  case 8:
    if (*(int *)(param_1 + 0x24) == 8) {
      pvVar4 = *(void **)(param_1 + 0x18);
      pvVar3 = *(void **)(param_2 + 0x18);
    }
    else {
      FUN_009d91b0(param_1);
      *(undefined4 *)(param_1 + 0x24) = 8;
      pvVar4 = operator_new(0x20);
      FUN_009d4c90();
      *(void **)(param_1 + 0x18) = pvVar4;
      if (*(int *)(param_2 + 0x24) == 8) {
        pvVar3 = *(void **)(param_2 + 0x18);
      }
      else {
        pvVar3 = (void *)FUN_009d4dc0();
      }
    }
    if (pvVar3 == pvVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffers/out_async/data/watch_winlose.pb.cc"
                   ,0x14f);
    }
    if (*(int *)((long)pvVar3 + 0x14) != 0) {
      *(int *)((long)pvVar4 + 0x14) = *(int *)((long)pvVar3 + 0x14);
    }
    if (*(int *)((long)pvVar3 + 0x18) != 0) {
      *(int *)((long)pvVar4 + 0x18) = *(int *)((long)pvVar3 + 0x18);
    }
    return;
  default:
    return;
  }
  if (*(int *)(param_1 + 0x24) == 4) {
    pvVar4 = *(void **)(param_1 + 0x18);
    pvVar3 = *(void **)(param_2 + 0x18);
  }
  else {
    FUN_009d91b0(param_1);
    *(undefined4 *)(param_1 + 0x24) = 4;
    pvVar4 = operator_new(0x28);
    FUN_009d2280();
    *(void **)(param_1 + 0x18) = pvVar4;
    if (*(int *)(param_2 + 0x24) == 4) {
      pvVar3 = *(void **)(param_2 + 0x18);
    }
    else {
      pvVar3 = (void *)FUN_009d24d0();
    }
  }
  if (pvVar3 == pvVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffers/out_async/data/watch_party.pb.cc"
                 ,0x11b);
  }
  bVar1 = **(byte **)((long)pvVar3 + 0x18);
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(*(byte **)((long)pvVar3 + 0x18) + 8) == 0) {
    return;
  }
  FUN_00860e40((long)pvVar4 + 0x18,*(undefined8 *)PTR_DAT_02716d10);
  return;
}


