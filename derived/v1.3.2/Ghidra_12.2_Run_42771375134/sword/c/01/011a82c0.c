/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011a82c0; name: FUN_011a82c0
 */


void FUN_011a82c0(long param_1,long param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buffers/out/data/nbr_data_holder.pb.cc"
                 ,0x37d);
  }
  switch(*(undefined4 *)(param_2 + 0x24)) {
  case 1:
    if (*(int *)(param_1 + 0x24) == 1) {
      pvVar3 = *(void **)(param_1 + 0x18);
      uVar2 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      FUN_011a89f0(param_1);
      *(undefined4 *)(param_1 + 0x24) = 1;
      pvVar3 = operator_new(0x28);
      FUN_011ad660();
      *(void **)(param_1 + 0x18) = pvVar3;
      if (*(int *)(param_2 + 0x24) == 1) {
        uVar2 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        uVar2 = FUN_011ad7a0();
      }
    }
    FUN_011ad690(pvVar3,uVar2);
    return;
  case 2:
    if (*(int *)(param_1 + 0x24) == 2) {
      pvVar3 = *(void **)(param_1 + 0x18);
      uVar2 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      FUN_011a89f0(param_1);
      *(undefined4 *)(param_1 + 0x24) = 2;
      pvVar3 = operator_new(0x30);
      FUN_011ac1d0();
      *(void **)(param_1 + 0x18) = pvVar3;
      if (*(int *)(param_2 + 0x24) == 2) {
        uVar2 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        uVar2 = FUN_011ac430();
      }
    }
    FUN_011ac270(pvVar3,uVar2);
    return;
  case 3:
    if (*(int *)(param_1 + 0x24) == 3) {
      pvVar3 = *(void **)(param_1 + 0x18);
      uVar2 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      FUN_011a89f0(param_1);
      *(undefined4 *)(param_1 + 0x24) = 3;
      pvVar3 = operator_new(0x18);
      FUN_011acc70();
      *(void **)(param_1 + 0x18) = pvVar3;
      if (*(int *)(param_2 + 0x24) == 3) {
        uVar2 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        uVar2 = FUN_011acda0();
      }
    }
    FUN_011acc90(pvVar3,uVar2);
    return;
  case 4:
    if (*(int *)(param_1 + 0x24) == 4) {
      pvVar3 = *(void **)(param_1 + 0x18);
      uVar2 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      FUN_011a89f0(param_1);
      *(undefined4 *)(param_1 + 0x24) = 4;
      pvVar3 = operator_new(0x28);
      FUN_011b1320();
      *(void **)(param_1 + 0x18) = pvVar3;
      if (*(int *)(param_2 + 0x24) == 4) {
        uVar2 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        uVar2 = FUN_011b1590();
      }
    }
    FUN_011b13c0(pvVar3,uVar2);
    return;
  case 5:
    if (*(int *)(param_1 + 0x24) == 5) {
      pvVar3 = *(void **)(param_1 + 0x18);
      uVar2 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      FUN_011a89f0(param_1);
      *(undefined4 *)(param_1 + 0x24) = 5;
      pvVar3 = operator_new(0x18);
      FUN_011ae300();
      *(void **)(param_1 + 0x18) = pvVar3;
      if (*(int *)(param_2 + 0x24) == 5) {
        uVar2 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        uVar2 = FUN_011ae430();
      }
    }
    FUN_011ae320(pvVar3,uVar2);
    return;
  case 6:
    if (*(int *)(param_1 + 0x24) == 6) {
      pvVar3 = *(void **)(param_1 + 0x18);
      uVar2 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      FUN_011a89f0(param_1);
      *(undefined4 *)(param_1 + 0x24) = 6;
      pvVar3 = operator_new(0x18);
      FUN_011b2110();
      *(void **)(param_1 + 0x18) = pvVar3;
      if (*(int *)(param_2 + 0x24) == 6) {
        uVar2 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        uVar2 = FUN_011b2230();
      }
    }
    FUN_011b2130(pvVar3,uVar2);
    return;
  case 7:
    break;
  case 8:
    if (*(int *)(param_1 + 0x24) == 8) {
      pvVar3 = *(void **)(param_1 + 0x18);
      uVar2 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      FUN_011a89f0(param_1);
      *(undefined4 *)(param_1 + 0x24) = 8;
      pvVar3 = operator_new(0x28);
      FUN_011aa7e0();
      *(void **)(param_1 + 0x18) = pvVar3;
      if (*(int *)(param_2 + 0x24) == 8) {
        uVar2 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        uVar2 = FUN_011aa910();
      }
    }
    FUN_011aa800(pvVar3,uVar2);
    return;
  case 9:
    if (*(int *)(param_1 + 0x24) == 9) {
      pvVar3 = *(void **)(param_1 + 0x18);
      uVar2 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      FUN_011a89f0(param_1);
      *(undefined4 *)(param_1 + 0x24) = 9;
      pvVar3 = operator_new(0x38);
      FUN_011aaee0();
      *(void **)(param_1 + 0x18) = pvVar3;
      if (*(int *)(param_2 + 0x24) == 9) {
        uVar2 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        uVar2 = FUN_011ab040();
      }
    }
    FUN_011aaf10(pvVar3,uVar2);
    return;
  case 10:
    if (*(int *)(param_1 + 0x24) == 10) {
      pvVar3 = *(void **)(param_1 + 0x18);
      uVar2 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      FUN_011a89f0(param_1);
      *(undefined4 *)(param_1 + 0x24) = 10;
      pvVar3 = operator_new(0x18);
      FUN_011ab830();
      *(void **)(param_1 + 0x18) = pvVar3;
      if (*(int *)(param_2 + 0x24) == 10) {
        uVar2 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        uVar2 = FUN_011ab950();
      }
    }
    FUN_011ab850(pvVar3,uVar2);
    return;
  case 0xb:
    if (*(int *)(param_1 + 0x24) == 0xb) {
      pvVar3 = *(void **)(param_1 + 0x18);
      uVar2 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      FUN_011a89f0(param_1);
      *(undefined4 *)(param_1 + 0x24) = 0xb;
      pvVar3 = operator_new(0x20);
      FUN_011b0500();
      *(void **)(param_1 + 0x18) = pvVar3;
      if (*(int *)(param_2 + 0x24) == 0xb) {
        uVar2 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        uVar2 = FUN_011b0620();
      }
    }
    FUN_011b0520(pvVar3,uVar2);
    return;
  case 0xc:
    if (*(int *)(param_1 + 0x24) == 0xc) {
      pvVar3 = *(void **)(param_1 + 0x18);
      uVar2 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      FUN_011a89f0(param_1);
      *(undefined4 *)(param_1 + 0x24) = 0xc;
      pvVar3 = operator_new(0x18);
      FUN_011b0af0();
      *(void **)(param_1 + 0x18) = pvVar3;
      if (*(int *)(param_2 + 0x24) == 0xc) {
        uVar2 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        uVar2 = FUN_011b0c10();
      }
    }
    FUN_011b0b10(pvVar3,uVar2);
    return;
  case 0xd:
    if (*(int *)(param_1 + 0x24) == 0xd) {
      pvVar3 = *(void **)(param_1 + 0x18);
      uVar2 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      FUN_011a89f0(param_1);
      *(undefined4 *)(param_1 + 0x24) = 0xd;
      pvVar3 = operator_new(0x18);
      FUN_011af9f0();
      *(void **)(param_1 + 0x18) = pvVar3;
      if (*(int *)(param_2 + 0x24) == 0xd) {
        uVar2 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        uVar2 = FUN_011afb20();
      }
    }
    FUN_011afa10(pvVar3,uVar2);
    return;
  case 0xe:
    if (*(int *)(param_1 + 0x24) == 0xe) {
      pvVar3 = *(void **)(param_1 + 0x18);
      uVar2 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      FUN_011a89f0(param_1);
      *(undefined4 *)(param_1 + 0x24) = 0xe;
      pvVar3 = operator_new(0x28);
      FUN_011aed90();
      *(void **)(param_1 + 0x18) = pvVar3;
      if (*(int *)(param_2 + 0x24) == 0xe) {
        uVar2 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        uVar2 = FUN_011aefe0();
      }
    }
    FUN_011aee30(pvVar3,uVar2);
    return;
  default:
    return;
  }
  if (*(int *)(param_1 + 0x24) == 7) {
    pvVar3 = *(void **)(param_1 + 0x18);
    pvVar1 = *(void **)(param_2 + 0x18);
  }
  else {
    FUN_011a89f0(param_1);
    *(undefined4 *)(param_1 + 0x24) = 7;
    pvVar3 = operator_new(0x18);
    FUN_011a77b0();
    *(void **)(param_1 + 0x18) = pvVar3;
    if (*(int *)(param_2 + 0x24) == 7) {
      pvVar1 = *(void **)(param_2 + 0x18);
    }
    else {
      pvVar1 = (void *)FUN_011a78d0();
    }
  }
  if (pvVar1 == pvVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buffers/out/data/pass_action.pb.cc"
                 ,0xf0);
  }
  return;
}


