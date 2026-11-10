/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de71f0; name: FUN_00de71f0
 */


void FUN_00de71f0(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  undefined8 local_38;
  
  plVar3 = *(long **)(param_1 + 0x238);
  uVar4 = *(undefined8 *)(param_1 + 0x288);
  lVar1 = (**(code **)(*plVar3 + 0x10))(plVar3,0x40,8);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar3;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  FUN_0075ca40(lVar1,plVar3,uVar4);
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  lVar2 = *(long *)(param_1 + 0x170);
  *(long *)(param_1 + 0x170) = lVar1;
  if (lVar2 != 0) {
    FUN_0075cc50(lVar2);
    (**(code **)(**(long **)(param_1 + 0x178) + 0x18))
              (*(long **)(param_1 + 0x178),lVar2,*(undefined8 *)(param_1 + 0x180),
               *(undefined8 *)(param_1 + 0x188));
    lVar1 = *(long *)(param_1 + 0x170);
  }
  *(long **)(param_1 + 0x178) = plVar3;
  *(undefined8 *)(param_1 + 0x180) = 0x40;
  *(undefined8 *)(param_1 + 0x188) = 8;
  FUN_0075efb0(auStack_48,*(undefined8 *)(lVar1 + 8),0,1);
  local_38 = *(undefined8 *)(lVar1 + 0x10);
  (**(code **)(param_1 + 400))(param_1 + 0x1b0,&local_38);
  FUN_0075f0a0(auStack_48);
  FUN_0075cdd0(*(undefined8 *)(param_1 + 0x170),param_1 + 0x60);
  return;
}


