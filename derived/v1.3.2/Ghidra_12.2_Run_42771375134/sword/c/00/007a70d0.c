/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a70d0; name: FUN_007a70d0
 */


void FUN_007a70d0(long param_1,long param_2)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/sequence_data_holder.pb.cc"
                 ,0x1c1);
  }
  switch(*(undefined4 *)(param_2 + 0x24)) {
  case 1:
    break;
  case 2:
    switch(*(undefined4 *)(param_1 + 0x24)) {
    case 1:
    case 3:
    case 4:
      if (*(long **)(param_1 + 0x18) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x18) + 8))();
      }
      break;
    case 2:
      pvVar1 = *(void **)(param_1 + 0x18);
      goto LAB_007a7310;
    }
    *(undefined4 *)(param_1 + 0x24) = 2;
    pvVar1 = operator_new(0x20);
    FUN_007a4b50();
    *(void **)(param_1 + 0x18) = pvVar1;
    if (*(int *)(param_2 + 0x24) == 2) {
LAB_007a7310:
      pvVar2 = *(void **)(param_2 + 0x18);
    }
    else {
      pvVar2 = (void *)FUN_007a4c70();
    }
    if (pvVar2 == pvVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/request_cancel.pb.cc"
                   ,0x118);
    }
    if (*(int *)((long)pvVar2 + 0x14) != 0) {
      *(int *)((long)pvVar1 + 0x14) = *(int *)((long)pvVar2 + 0x14);
    }
    return;
  case 3:
    switch(*(undefined4 *)(param_1 + 0x24)) {
    case 1:
    case 2:
    case 4:
      if (*(long **)(param_1 + 0x18) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x18) + 8))();
      }
      break;
    case 3:
      pvVar1 = *(void **)(param_1 + 0x18);
      goto LAB_007a72f4;
    }
    *(undefined4 *)(param_1 + 0x24) = 3;
    pvVar1 = operator_new(0x20);
    FUN_007a5730();
    *(void **)(param_1 + 0x18) = pvVar1;
    if (*(int *)(param_2 + 0x24) == 3) {
LAB_007a72f4:
      pvVar2 = *(void **)(param_2 + 0x18);
    }
    else {
      pvVar2 = (void *)FUN_007a5850();
    }
    if (pvVar2 == pvVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/request_cancel_all.pb.cc"
                   ,0x118);
    }
    if (*(int *)((long)pvVar2 + 0x14) != 0) {
      *(int *)((long)pvVar1 + 0x14) = *(int *)((long)pvVar2 + 0x14);
    }
    return;
  case 4:
    switch(*(undefined4 *)(param_1 + 0x24)) {
    case 1:
    case 2:
    case 3:
      if (*(long **)(param_1 + 0x18) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x18) + 8))();
      }
      break;
    case 4:
      pvVar1 = *(void **)(param_1 + 0x18);
      goto LAB_007a732c;
    }
    *(undefined4 *)(param_1 + 0x24) = 4;
    pvVar1 = operator_new(0x20);
    FUN_007a6330();
    *(void **)(param_1 + 0x18) = pvVar1;
    if (*(int *)(param_2 + 0x24) == 4) {
LAB_007a732c:
      pvVar2 = *(void **)(param_2 + 0x18);
    }
    else {
      pvVar2 = (void *)FUN_007a6460();
    }
    if (pvVar2 == pvVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/request_forced_proceed.pb.cc"
                   ,0x150);
    }
    if (*(int *)((long)pvVar2 + 0x14) != 0) {
      *(int *)((long)pvVar1 + 0x14) = *(int *)((long)pvVar2 + 0x14);
    }
    if (*(int *)((long)pvVar2 + 0x18) != 0) {
      *(int *)((long)pvVar1 + 0x18) = *(int *)((long)pvVar2 + 0x18);
    }
    return;
  default:
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x24)) {
  case 1:
    pvVar1 = *(void **)(param_1 + 0x18);
    goto LAB_007a72d8;
  case 2:
  case 3:
  case 4:
    if (*(long **)(param_1 + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 1;
  pvVar1 = operator_new(0x20);
  FUN_007a3db0();
  *(void **)(param_1 + 0x18) = pvVar1;
  if (*(int *)(param_2 + 0x24) == 1) {
LAB_007a72d8:
    pvVar2 = *(void **)(param_2 + 0x18);
  }
  else {
    pvVar2 = (void *)FUN_007a3ef0();
  }
  if (pvVar2 == pvVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/cancel_accepted.pb.cc"
                 ,0x14d);
  }
  if (*(int *)((long)pvVar2 + 0x14) != 0) {
    *(int *)((long)pvVar1 + 0x14) = *(int *)((long)pvVar2 + 0x14);
  }
  if (*(char *)((long)pvVar2 + 0x18) != '\0') {
    *(undefined1 *)((long)pvVar1 + 0x18) = 1;
  }
  return;
}


