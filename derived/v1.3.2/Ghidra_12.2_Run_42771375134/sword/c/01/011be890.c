/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011be890; name: FUN_011be890
 */


void FUN_011be890(long param_1,long param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/nesthole/protocol_buffers/out/data/nesthole_async_data_holder.pb.cc"
                 ,0x26b);
  }
  switch(*(undefined4 *)(param_2 + 0x24)) {
  case 1:
    if (*(int *)(param_1 + 0x24) == 1) {
      pvVar2 = *(void **)(param_1 + 0x18);
      uVar1 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      FUN_011bed40(param_1);
      *(undefined4 *)(param_1 + 0x24) = 1;
      pvVar2 = operator_new(0x28);
      FUN_011c0920();
      *(void **)(param_1 + 0x18) = pvVar2;
      if (*(int *)(param_2 + 0x24) == 1) {
        uVar1 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        uVar1 = FUN_011c0b70();
      }
    }
    break;
  case 2:
    if (*(int *)(param_1 + 0x24) == 2) {
      pvVar2 = *(void **)(param_1 + 0x18);
      uVar1 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      FUN_011bed40(param_1);
      *(undefined4 *)(param_1 + 0x24) = 2;
      pvVar2 = operator_new(0x28);
      FUN_011c1160();
      *(void **)(param_1 + 0x18) = pvVar2;
      if (*(int *)(param_2 + 0x24) == 2) {
        uVar1 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        uVar1 = FUN_011c13b0();
      }
    }
    FUN_011c1200(pvVar2,uVar1);
    return;
  case 3:
    if (*(int *)(param_1 + 0x24) == 3) {
      pvVar2 = *(void **)(param_1 + 0x18);
      uVar1 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      FUN_011bed40(param_1);
      *(undefined4 *)(param_1 + 0x24) = 3;
      pvVar2 = operator_new(0x28);
      FUN_011c19a0();
      *(void **)(param_1 + 0x18) = pvVar2;
      if (*(int *)(param_2 + 0x24) == 3) {
        uVar1 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        uVar1 = FUN_011c1bf0();
      }
    }
    FUN_011c1a40(pvVar2,uVar1);
    return;
  case 4:
    if (*(int *)(param_1 + 0x24) == 4) {
      pvVar2 = *(void **)(param_1 + 0x18);
      uVar1 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      FUN_011bed40(param_1);
      *(undefined4 *)(param_1 + 0x24) = 4;
      pvVar2 = operator_new(0x28);
      FUN_011c21e0();
      *(void **)(param_1 + 0x18) = pvVar2;
      if (*(int *)(param_2 + 0x24) == 4) {
        uVar1 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        uVar1 = FUN_011c2430();
      }
    }
    FUN_011c2280(pvVar2,uVar1);
    return;
  case 5:
    if (*(int *)(param_1 + 0x24) == 5) {
      pvVar2 = *(void **)(param_1 + 0x18);
      uVar1 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      FUN_011bed40(param_1);
      *(undefined4 *)(param_1 + 0x24) = 5;
      pvVar2 = operator_new(0x28);
      FUN_011c2a20();
      *(void **)(param_1 + 0x18) = pvVar2;
      if (*(int *)(param_2 + 0x24) == 5) {
        uVar1 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        uVar1 = FUN_011c2c70();
      }
    }
    FUN_011c2ac0(pvVar2,uVar1);
    return;
  case 6:
    if (*(int *)(param_1 + 0x24) == 6) {
      pvVar2 = *(void **)(param_1 + 0x18);
      uVar1 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      FUN_011bed40(param_1);
      *(undefined4 *)(param_1 + 0x24) = 6;
      pvVar2 = operator_new(0x28);
      FUN_011c3260();
      *(void **)(param_1 + 0x18) = pvVar2;
      if (*(int *)(param_2 + 0x24) == 6) {
        uVar1 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        uVar1 = FUN_011c34b0();
      }
    }
    FUN_011c3300(pvVar2,uVar1);
    return;
  case 7:
    if (*(int *)(param_1 + 0x24) == 7) {
      pvVar2 = *(void **)(param_1 + 0x18);
      uVar1 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      FUN_011bed40(param_1);
      *(undefined4 *)(param_1 + 0x24) = 7;
      pvVar2 = operator_new(0x28);
      FUN_011c3aa0();
      *(void **)(param_1 + 0x18) = pvVar2;
      if (*(int *)(param_2 + 0x24) == 7) {
        uVar1 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        uVar1 = FUN_011c3cf0();
      }
    }
    FUN_011c3b40(pvVar2,uVar1);
    return;
  case 8:
    if (*(int *)(param_1 + 0x24) == 8) {
      pvVar2 = *(void **)(param_1 + 0x18);
      uVar1 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      FUN_011bed40(param_1);
      *(undefined4 *)(param_1 + 0x24) = 8;
      pvVar2 = operator_new(0x28);
      FUN_011c42e0();
      *(void **)(param_1 + 0x18) = pvVar2;
      if (*(int *)(param_2 + 0x24) == 8) {
        uVar1 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        uVar1 = FUN_011c4530();
      }
    }
    FUN_011c4380(pvVar2,uVar1);
    return;
  default:
    return;
  }
  FUN_011c09c0(pvVar2,uVar1);
  return;
}


