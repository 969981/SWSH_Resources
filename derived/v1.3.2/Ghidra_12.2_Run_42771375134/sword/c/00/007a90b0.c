/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a90b0; name: FUN_007a90b0
 */


void FUN_007a90b0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_60 [16];
  undefined *local_50;
  undefined4 local_48;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 auStack_40 [16];
  
  FUN_0188ffc0(auStack_40);
  FUN_018901c0(&local_50);
  FUN_018725b0(auStack_40,&local_50);
  FUN_0189d170(&local_50);
  FUN_018725b0(auStack_40,&local_50);
  local_43 = 0;
  local_50 = PTR_DAT_02716738 + 0x10;
  local_48 = FUN_007a9e30();
  local_44 = 1;
  FUN_0189d3e0(auStack_60,*(undefined8 *)PTR_DAT_02716730,&local_50);
  FUN_018725b0(auStack_40,auStack_60);
  FUN_01890100(auStack_60);
  FUN_018725b0(auStack_40,auStack_60);
  plVar3 = *(long **)(param_1 + 0x50);
  uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3,8,8);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar3;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  FUN_018908a0(uVar1);
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  puVar4 = *(undefined8 **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    (**(code **)(**(long **)(param_1 + 0x68) + 0x18))
              (*(long **)(param_1 + 0x68),puVar4,*(undefined8 *)(param_1 + 0x70),
               *(undefined8 *)(param_1 + 0x78));
  }
  *(long **)(param_1 + 0x68) = plVar3;
  *(undefined8 *)(param_1 + 0x70) = 8;
  *(undefined8 *)(param_1 + 0x78) = 8;
  return;
}


