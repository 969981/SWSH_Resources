/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e3600; name: FUN_009e3600
 */


void FUN_009e3600(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_38 [8];
  
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = param_1;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  lVar2 = (**(code **)(*param_1 + 0x10))(param_1,0x80,8);
  if (lVar2 == 0) {
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  FUN_0077d050(lVar2,0x640);
  *(long **)(lVar2 + 8) = param_1;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0x80;
  *(undefined8 *)(lVar2 + 0x20) = 8;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar1 = FUN_009e3950(auStack_38,param_1);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  FUN_014bc440(lVar1,&DAT_02a50830,0);
  lVar3 = *(long *)(lVar1 + 0x60);
  if (lVar3 == 0) {
    FUN_0077e740(0,0x16b,lVar2);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0077e740(lVar3,0x16b,lVar2);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  FUN_0087d230(*param_2,lVar2);
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return;
}


