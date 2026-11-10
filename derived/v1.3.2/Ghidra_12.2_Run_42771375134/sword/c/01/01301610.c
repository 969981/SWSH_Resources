/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01301610; name: FUN_01301610
 */


void FUN_01301610(long param_1,long param_2)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data/pokecamp_data_holder.pb.cc"
                 ,0x1eb);
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
      goto LAB_013018d8;
    }
    *(undefined4 *)(param_1 + 0x24) = 2;
    pvVar2 = operator_new(0x30);
    FUN_01302c30();
    *(void **)(param_1 + 0x18) = pvVar2;
    if (*(int *)(param_2 + 0x24) == 2) {
LAB_013018d8:
      uVar3 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      uVar3 = FUN_01302da0();
    }
    FUN_01302c60(pvVar2,uVar3);
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
      goto LAB_013018bc;
    }
    *(undefined4 *)(param_1 + 0x24) = 3;
    pvVar2 = operator_new(0x28);
    FUN_01304dc0();
    *(void **)(param_1 + 0x18) = pvVar2;
    if (*(int *)(param_2 + 0x24) == 3) {
LAB_013018bc:
      uVar3 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      uVar3 = FUN_01304f40();
    }
    FUN_01304df0(pvVar2,uVar3);
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
      goto LAB_013018f4;
    }
    *(undefined4 *)(param_1 + 0x24) = 4;
    pvVar2 = operator_new(0x20);
    FUN_01303f90();
    *(void **)(param_1 + 0x18) = pvVar2;
    if (*(int *)(param_2 + 0x24) == 4) {
LAB_013018f4:
      uVar3 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      uVar3 = FUN_013040c0();
    }
    FUN_01303fb0(pvVar2,uVar3);
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
      goto LAB_01301884;
    }
    *(undefined4 *)(param_1 + 0x24) = 5;
    pvVar2 = operator_new(200);
    FUN_012fd4d0();
    *(void **)(param_1 + 0x18) = pvVar2;
    if (*(int *)(param_2 + 0x24) == 5) {
LAB_01301884:
      uVar3 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      uVar3 = FUN_012fd8a0();
    }
    FUN_012fd520(pvVar2,uVar3);
    return;
  default:
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x24)) {
  case 1:
    pvVar2 = *(void **)(param_1 + 0x18);
    goto LAB_013018a0;
  case 2:
  case 3:
  case 4:
  case 5:
    if (*(long **)(param_1 + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 1;
  pvVar2 = operator_new(0x40);
  FUN_01300120();
  *(void **)(param_1 + 0x18) = pvVar2;
  if (*(int *)(param_2 + 0x24) == 1) {
LAB_013018a0:
    pvVar1 = *(void **)(param_2 + 0x18);
  }
  else {
    pvVar1 = (void *)FUN_01300300();
  }
  if (pvVar1 == pvVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data/cooking_data.pb.cc"
                 ,0x1d3);
  }
  FUN_0081a4e0((long)pvVar2 + 0x20,(long)pvVar1 + 0x20);
  if (*(int *)((long)pvVar1 + 0x14) != 0) {
    *(int *)((long)pvVar2 + 0x14) = *(int *)((long)pvVar1 + 0x14);
  }
  if (*(int *)((long)pvVar1 + 0x18) != 0) {
    *(int *)((long)pvVar2 + 0x18) = *(int *)((long)pvVar1 + 0x18);
  }
  if (*(int *)((long)pvVar1 + 0x34) != 0) {
    *(int *)((long)pvVar2 + 0x34) = *(int *)((long)pvVar1 + 0x34);
  }
  if (*(char *)((long)pvVar1 + 0x38) != '\0') {
    *(undefined1 *)((long)pvVar2 + 0x38) = 1;
  }
  return;
}


