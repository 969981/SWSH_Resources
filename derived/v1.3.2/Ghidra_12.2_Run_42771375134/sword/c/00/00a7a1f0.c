/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a7a1f0; name: FUN_00a7a1f0
 */


bool FUN_00a7a1f0(long param_1,uint param_2,undefined4 param_3)

{
  bool bVar1;
  byte bVar2;
  long *plVar3;
  int local_50;
  ushort local_4c;
  int local_3c;
  
  if (param_2 == 0xff) {
    return false;
  }
  plVar3 = *(long **)(param_1 + (ulong)param_2 * 8 + 0x548);
  if (plVar3 != (long *)0x0) {
    (**(code **)(plVar3[9] + 0x10))();
  }
  (**(code **)(*plVar3 + 0x220))(&local_50,plVar3);
  if (local_3c != 2) {
LAB_00a7a3a8:
    bVar1 = false;
    goto switchD_00a7a29c_caseD_32a;
  }
  (**(code **)(*plVar3 + 0x220))(&local_50,plVar3);
  bVar2 = FUN_00880ae0(param_3);
  bVar1 = false;
  if (0x328 < local_50) {
    switch(local_50) {
    case 0x329:
    case 0x36f:
      bVar1 = bVar2 == 8;
      break;
    case 0x32c:
    case 0x349:
    case 0x34a:
switchD_00a7a29c_caseD_32c:
      bVar1 = bVar2 == 0xb;
      break;
    case 0x32f:
    case 0x353:
switchD_00a7a29c_caseD_32f:
      bVar1 = bVar2 == 9;
      break;
    case 0x332:
    case 0x342:
      goto switchD_00a7a29c_caseD_332;
    case 0x337:
      bVar1 = bVar2 == 2;
      break;
    case 0x33a:
      bVar1 = bVar2 == 0xd;
      break;
    case 0x347:
      bVar1 = bVar2 == 5;
      break;
    case 0x34c:
      bVar1 = bVar2 == 4;
      break;
    case 0x351:
switchD_00a7a29c_caseD_351:
      bVar1 = bVar2 == 0xc;
      break;
    case 0x35a:
    case 0x365:
      bVar1 = bVar2 == 0x11;
      break;
    case 0x35d:
      bVar1 = bVar2 == 0x10;
      break;
    case 0x374:
      bVar1 = bVar2 == 0xf;
      break;
    case 0x37c:
      if (bVar2 == 10) {
        (**(code **)(*plVar3 + 0x220))(&local_50,plVar3);
        goto LAB_00a7a40c;
      }
      if (bVar2 == 0x10) {
        (**(code **)(*plVar3 + 0x220))(&local_50,plVar3);
        bVar1 = local_4c == 0;
        break;
      }
      goto LAB_00a7a3a8;
    }
    goto switchD_00a7a29c_caseD_32a;
  }
  switch(local_50) {
  case 3:
    goto switchD_00a7a29c_caseD_32c;
  case 4:
  case 5:
  case 7:
  case 8:
  case 10:
  case 0xb:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
    break;
  case 6:
    goto switchD_00a7a29c_caseD_32f;
  case 9:
switchD_00a7a29c_caseD_332:
    bVar1 = bVar2 == 10;
    break;
  case 0xc:
    bVar1 = bVar2 == 6;
    break;
  case 0x19:
    goto switchD_00a7a29c_caseD_351;
  case 0x34:
switchD_00a7a2c8_caseD_34:
    bVar1 = bVar2 == 0;
    break;
  case 0x44:
    local_4c = (ushort)bVar2;
LAB_00a7a40c:
    bVar1 = local_4c == 1;
    break;
  default:
    switch(local_50) {
    case 0x5e:
      bVar1 = bVar2 == 7;
      break;
    case 0x5f:
    case 0x60:
    case 0x61:
    case 0x62:
    case 100:
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x6f:
    case 0x70:
    case 0x71:
    case 0x72:
    case 0x73:
    case 0x74:
    case 0x75:
    case 0x76:
    case 0x77:
    case 0x78:
    case 0x79:
    case 0x7a:
    case 0x7b:
    case 0x7c:
    case 0x7d:
    case 0x7e:
    case 0x7f:
    case 0x80:
    case 0x81:
    case 0x82:
    case 0x84:
    case 0x86:
    case 0x87:
    case 0x88:
    case 0x89:
    case 0x8a:
    case 0x8b:
    case 0x8c:
    case 0x8d:
    case 0x8e:
      break;
    case 99:
      goto switchD_00a7a29c_caseD_332;
    case 0x83:
      bVar1 = bVar2 == 0xe;
      break;
    case 0x85:
    case 0x8f:
      goto switchD_00a7a2c8_caseD_34;
    default:
      if (local_50 == 0x239) {
        bVar1 = bVar2 == 3;
      }
    }
  }
switchD_00a7a29c_caseD_32a:
  (**(code **)(plVar3[9] + 0x18))(plVar3 + 9);
  return bVar1;
}


