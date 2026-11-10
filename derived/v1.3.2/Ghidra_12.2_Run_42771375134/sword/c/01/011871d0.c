/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011871d0; name: FUN_011871d0
 */


void FUN_011871d0(long param_1,long param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/chika/protocol_buffers/out/data/chika_async_data_holder.pb.cc"
                 ,0x341);
  }
  switch(*(undefined4 *)(param_2 + 0x24)) {
  case 1:
    if (*(int *)(param_1 + 0x24) == 1) {
      pvVar2 = *(void **)(param_1 + 0x18);
      uVar1 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      FUN_01187890(param_1);
      *(undefined4 *)(param_1 + 0x24) = 1;
      pvVar2 = operator_new(0x20);
      FUN_0118a0e0();
      *(void **)(param_1 + 0x18) = pvVar2;
      if (*(int *)(param_2 + 0x24) == 1) {
        uVar1 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        uVar1 = FUN_0118a200();
      }
    }
    FUN_0118a100(pvVar2,uVar1);
    return;
  case 2:
    if (*(int *)(param_1 + 0x24) == 2) {
      pvVar2 = *(void **)(param_1 + 0x18);
      uVar1 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      FUN_01187890(param_1);
      *(undefined4 *)(param_1 + 0x24) = 2;
      pvVar2 = operator_new(0x28);
      FUN_0118a6d0();
      *(void **)(param_1 + 0x18) = pvVar2;
      if (*(int *)(param_2 + 0x24) == 2) {
        uVar1 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        uVar1 = FUN_0118a920();
      }
    }
    break;
  case 3:
    if (*(int *)(param_1 + 0x24) == 3) {
      pvVar2 = *(void **)(param_1 + 0x18);
      uVar1 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      FUN_01187890(param_1);
      *(undefined4 *)(param_1 + 0x24) = 3;
      pvVar2 = operator_new(0x28);
      FUN_0118af10();
      *(void **)(param_1 + 0x18) = pvVar2;
      if (*(int *)(param_2 + 0x24) == 3) {
        uVar1 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        uVar1 = FUN_0118b160();
      }
    }
    FUN_0118afb0(pvVar2,uVar1);
    return;
  case 4:
    if (*(int *)(param_1 + 0x24) == 4) {
      pvVar2 = *(void **)(param_1 + 0x18);
      uVar1 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      FUN_01187890(param_1);
      *(undefined4 *)(param_1 + 0x24) = 4;
      pvVar2 = operator_new(0x28);
      FUN_0118b750();
      *(void **)(param_1 + 0x18) = pvVar2;
      if (*(int *)(param_2 + 0x24) == 4) {
        uVar1 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        uVar1 = FUN_0118b9a0();
      }
    }
    FUN_0118b7f0(pvVar2,uVar1);
    return;
  case 5:
    if (*(int *)(param_1 + 0x24) == 5) {
      pvVar2 = *(void **)(param_1 + 0x18);
      uVar1 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      FUN_01187890(param_1);
      *(undefined4 *)(param_1 + 0x24) = 5;
      pvVar2 = operator_new(0x28);
      FUN_0118bf90();
      *(void **)(param_1 + 0x18) = pvVar2;
      if (*(int *)(param_2 + 0x24) == 5) {
        uVar1 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        uVar1 = FUN_0118c1e0();
      }
    }
    FUN_0118c030(pvVar2,uVar1);
    return;
  case 6:
    if (*(int *)(param_1 + 0x24) == 6) {
      pvVar2 = *(void **)(param_1 + 0x18);
      uVar1 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      FUN_01187890(param_1);
      *(undefined4 *)(param_1 + 0x24) = 6;
      pvVar2 = operator_new(0x28);
      FUN_0118c7d0();
      *(void **)(param_1 + 0x18) = pvVar2;
      if (*(int *)(param_2 + 0x24) == 6) {
        uVar1 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        uVar1 = FUN_0118ca20();
      }
    }
    FUN_0118c870(pvVar2,uVar1);
    return;
  case 7:
    if (*(int *)(param_1 + 0x24) == 7) {
      pvVar2 = *(void **)(param_1 + 0x18);
      uVar1 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      FUN_01187890(param_1);
      *(undefined4 *)(param_1 + 0x24) = 7;
      pvVar2 = operator_new(0x28);
      FUN_0118cfa0();
      *(void **)(param_1 + 0x18) = pvVar2;
      if (*(int *)(param_2 + 0x24) == 7) {
        uVar1 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        uVar1 = FUN_0118d1f0();
      }
    }
    FUN_0118d040(pvVar2,uVar1);
    return;
  case 8:
    if (*(int *)(param_1 + 0x24) == 8) {
      pvVar2 = *(void **)(param_1 + 0x18);
      uVar1 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      FUN_01187890(param_1);
      *(undefined4 *)(param_1 + 0x24) = 8;
      pvVar2 = operator_new(0x28);
      FUN_0118d770();
      *(void **)(param_1 + 0x18) = pvVar2;
      if (*(int *)(param_2 + 0x24) == 8) {
        uVar1 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        uVar1 = FUN_0118d890();
      }
    }
    FUN_0118d790(pvVar2,uVar1);
    return;
  case 9:
    if (*(int *)(param_1 + 0x24) == 9) {
      pvVar2 = *(void **)(param_1 + 0x18);
      uVar1 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      FUN_01187890(param_1);
      *(undefined4 *)(param_1 + 0x24) = 9;
      pvVar2 = operator_new(0x28);
      FUN_0118dcf0();
      *(void **)(param_1 + 0x18) = pvVar2;
      if (*(int *)(param_2 + 0x24) == 9) {
        uVar1 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        uVar1 = FUN_0118de10();
      }
    }
    FUN_0118dd10(pvVar2,uVar1);
    return;
  case 10:
    if (*(int *)(param_1 + 0x24) == 10) {
      pvVar2 = *(void **)(param_1 + 0x18);
      uVar1 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      FUN_01187890(param_1);
      *(undefined4 *)(param_1 + 0x24) = 10;
      pvVar2 = operator_new(0x28);
      FUN_0118e270();
      *(void **)(param_1 + 0x18) = pvVar2;
      if (*(int *)(param_2 + 0x24) == 10) {
        uVar1 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        uVar1 = FUN_0118e4c0();
      }
    }
    FUN_0118e310(pvVar2,uVar1);
    return;
  case 0xb:
    if (*(int *)(param_1 + 0x24) == 0xb) {
      pvVar2 = *(void **)(param_1 + 0x18);
      uVar1 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      FUN_01187890(param_1);
      *(undefined4 *)(param_1 + 0x24) = 0xb;
      pvVar2 = operator_new(0x28);
      FUN_0118ea40();
      *(void **)(param_1 + 0x18) = pvVar2;
      if (*(int *)(param_2 + 0x24) == 0xb) {
        uVar1 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        uVar1 = FUN_0118ec90();
      }
    }
    FUN_0118eae0(pvVar2,uVar1);
    return;
  case 0xc:
    if (*(int *)(param_1 + 0x24) == 0xc) {
      pvVar2 = *(void **)(param_1 + 0x18);
      uVar1 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      FUN_01187890(param_1);
      *(undefined4 *)(param_1 + 0x24) = 0xc;
      pvVar2 = operator_new(0x28);
      FUN_0118f280();
      *(void **)(param_1 + 0x18) = pvVar2;
      if (*(int *)(param_2 + 0x24) == 0xc) {
        uVar1 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        uVar1 = FUN_0118f4d0();
      }
    }
    FUN_0118f320(pvVar2,uVar1);
    return;
  case 0xd:
    if (*(int *)(param_1 + 0x24) == 0xd) {
      pvVar2 = *(void **)(param_1 + 0x18);
      uVar1 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      FUN_01187890(param_1);
      *(undefined4 *)(param_1 + 0x24) = 0xd;
      pvVar2 = operator_new(0x28);
      FUN_0118fac0();
      *(void **)(param_1 + 0x18) = pvVar2;
      if (*(int *)(param_2 + 0x24) == 0xd) {
        uVar1 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        uVar1 = FUN_0118fd10();
      }
    }
    FUN_0118fb60(pvVar2,uVar1);
    return;
  default:
    return;
  }
  FUN_0118a770(pvVar2,uVar1);
  return;
}


