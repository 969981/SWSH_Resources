/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e2aa0; name: FUN_008e2aa0
 */


void FUN_008e2aa0(long param_1,int param_2,undefined2 param_3)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  
  lVar1 = *(long *)(param_1 + 0x460);
  if (lVar1 != 0) {
    if (param_2 == 0xb) {
      uVar2 = FUN_00932ae0(lVar1,4);
      iVar3 = 0xb;
      param_2 = 9;
    }
    else {
      if (param_2 != 9) goto LAB_008e2afc;
      uVar2 = FUN_00932ae0(lVar1,4);
      iVar3 = 9;
      param_2 = 0xb;
    }
    if ((uVar2 & 1) == 0) {
      param_2 = iVar3;
    }
  }
LAB_008e2afc:
  switch(param_2) {
  case 8:
    *(undefined2 *)(param_1 + 0x2a2) = param_3;
    break;
  case 9:
    *(undefined2 *)(param_1 + 0x2a4) = param_3;
    return;
  case 10:
    *(undefined2 *)(param_1 + 0x2a6) = param_3;
    return;
  case 0xb:
    *(undefined2 *)(param_1 + 0x2a8) = param_3;
    return;
  case 0xc:
    *(undefined2 *)(param_1 + 0x2aa) = param_3;
    return;
  }
  return;
}


