/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b3080; name: FUN_014b3080
 */


void FUN_014b3080(long *param_1,undefined4 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(DAT_02a748d8 + 0x60);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = param_3;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  lVar2 = (**(code **)(*param_3 + 0x10))(param_3,0x80,8);
  if (lVar2 == 0) {
    (**(code **)(*param_3 + 0xb8))(param_3);
  }
  FUN_0077d050(lVar2,0x80);
  *(long **)(lVar2 + 8) = param_3;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0x80;
  *(undefined8 *)(lVar2 + 0x20) = 8;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  *param_1 = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  switch(param_2) {
  case 1:
  case 2:
  case 3:
  case 0x1a:
  case 0x1b:
    FUN_0077e740(lVar3,4,lVar2);
    break;
  case 4:
  case 5:
    FUN_0077e740(lVar3,2,lVar2);
    break;
  default:
    FUN_0077e740(lVar3,6,lVar2);
    break;
  case 7:
  case 8:
    FUN_0077e740(lVar3,3,lVar2);
    break;
  case 10:
  case 0xb:
  case 0xc:
    FUN_0077e740(lVar3,5,lVar2);
    break;
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
    FUN_0077e740(lVar3,8,lVar2);
    break;
  case 0x18:
  case 0x19:
    FUN_0077e740(lVar3,9,lVar2);
    break;
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
    FUN_0077e740(lVar3,0xe,lVar2);
    break;
  case 0x22:
    FUN_0077e740(lVar3,0xb,lVar2);
    break;
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
    FUN_0077e740(lVar3,0xc,lVar2);
    break;
  case 0x27:
  case 0x28:
  case 0x29:
    FUN_0077e740(lVar3,0x10,lVar2);
    break;
  case 0x2a:
  case 0x2b:
    FUN_0077e740(lVar3,0x12,lVar2);
  }
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x014b31b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  return;
}


