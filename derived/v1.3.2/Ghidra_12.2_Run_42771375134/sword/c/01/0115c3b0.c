/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0115c3b0; name: FUN_0115c3b0
 */


void FUN_0115c3b0(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  ulong local_38;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x5e0) + 0x2e8);
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  switch(param_2) {
  case 0:
    *(byte *)(*(long *)(param_1 + 0x718) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x718) + 0x58) & 0xfe;
    return;
  case 1:
  case 4:
  case 7:
    uVar1 = *(undefined8 *)(param_1 + 0x5d0);
    local_38 = 0x263358dff9d9;
    break;
  case 2:
  case 5:
  case 8:
    uVar1 = *(undefined8 *)(param_1 + 0x5d0);
    local_38 = 0x253358dff826;
    break;
  case 3:
  case 6:
  case 9:
    uVar1 = *(undefined8 *)(param_1 + 0x5d0);
    local_38 = 0x243358dff673;
    break;
  default:
    goto switchD_0115c41c_default;
  }
  local_38 = local_38 | 0x9999000000000000;
  FUN_0077eb10(uVar1,&local_38,lVar2);
switchD_0115c41c_default:
  uVar1 = FUN_0077d470(lVar2);
  FUN_00ffd6a0(param_1 + 0x100,"pane_T_net_title_01",uVar1,10);
  return;
}


