/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01086630; name: FUN_01086630
 */


void FUN_01086630(long param_1)

{
  ulong uVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  long local_48;
  long local_40;
  long local_38;
  
  cVar2 = '\n';
  cVar3 = '\x04';
  switch(*(undefined1 *)(param_1 + 0xa0)) {
  case 0:
    FUN_01086990(param_1);
    *(char *)(param_1 + 0xa0) = *(char *)(param_1 + 0xa0) + '\x01';
  case 1:
    uVar1 = FUN_00da4bb0(*(undefined8 *)(param_1 + 0x68),0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    *(char *)(param_1 + 0xa0) = *(char *)(param_1 + 0xa0) + '\x01';
  case 2:
    FUN_01086ac0(param_1);
    cVar3 = *(char *)(param_1 + 0xa0);
    *(char *)(param_1 + 0xa0) = cVar3 + '\x01';
    cVar3 = cVar3 + '\x02';
  case 3:
    if (*(char *)(param_1 + 0xa1) == '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 0xa1) = 0;
    *(char *)(param_1 + 0xa0) = cVar3;
  case 4:
    FUN_01086ef0(param_1);
    FUN_01086fd0(param_1);
    *(char *)(param_1 + 0xa0) = *(char *)(param_1 + 0xa0) + '\x01';
  case 5:
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    (**(code **)(**(long **)(param_1 + 0x88) + 0x10))(&local_40);
    local_38 = local_40;
    local_40 = 0;
    uVar1 = FUN_00c79ee0(uVar4,&local_38);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
    if ((uVar1 & 1) == 0) {
      return;
    }
    *(char *)(param_1 + 0xa0) = *(char *)(param_1 + 0xa0) + '\x01';
  case 6:
    FUN_01087200(param_1);
    break;
  case 7:
    FUN_010872e0(param_1);
    break;
  case 8:
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    (**(code **)(**(long **)(param_1 + 0x88) + 0x10))(&local_40);
    local_38 = local_40;
    local_40 = 0;
    local_48 = *(long *)(*(long *)(param_1 + 0x80) + 0x58);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
    }
    FUN_00c7a130(uVar4,&local_38,&local_48);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
    *(undefined1 *)(param_1 + 0xa2) = 1;
    cVar2 = *(char *)(param_1 + 0xa0) + '\x02';
    *(char *)(param_1 + 0xa0) = *(char *)(param_1 + 0xa0) + '\x01';
  case 9:
    if ((*(char *)(param_1 + 0xa1) == '\0') && (*(char *)(param_1 + 0xa3) == '\0')) {
      return;
    }
    *(undefined1 *)(param_1 + 0xa2) = 0;
    *(char *)(param_1 + 0xa0) = cVar2;
  case 10:
    (**(code **)(**(long **)(param_1 + 0x80) + 0x70))(*(long **)(param_1 + 0x80),0,0);
    break;
  case 0xb:
    FUN_01087590(param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    (**(code **)(**(long **)(param_1 + 0x88) + 0x10))(&local_40);
    local_38 = local_40;
    local_40 = 0;
    FUN_00c7a010(uVar4,&local_38);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
    *(char *)(param_1 + 0xa0) = *(char *)(param_1 + 0xa0) + '\x01';
    goto LAB_010868d4;
  case 0xc:
LAB_010868d4:
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    (**(code **)(**(long **)(param_1 + 0x88) + 0x10))(&local_40);
    local_38 = local_40;
    local_40 = 0;
    uVar1 = FUN_00c7a070(uVar4,&local_38);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    }
    if ((uVar1 & 1) == 0) {
      return;
    }
    break;
  case 0xd:
    if (*(long *)(param_1 + 0x88) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x88) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x88) = 0;
      break;
    }
    cVar3 = '\x0e';
    goto LAB_0108695c;
  case 0xe:
    cVar3 = '\x03';
    goto LAB_0108695c;
  default:
    goto switchD_0108666c_default;
  }
  cVar3 = *(char *)(param_1 + 0xa0) + '\x01';
LAB_0108695c:
  *(char *)(param_1 + 0xa0) = cVar3;
switchD_0108666c_default:
  return;
}


