/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015454b0; name: FUN_015454b0
 */


void FUN_015454b0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  void *__s;
  long lVar3;
  long *plVar4;
  undefined1 local_2f0 [32];
  undefined4 local_2d0 [160];
  
  puVar1 = PTR_DAT_02710798;
  local_2f0[0] = 1;
  local_2d0[0] = 0;
  uVar2 = FUN_0153bf80(*(undefined8 *)PTR_DAT_02710798,local_2d0);
  FUN_01513800(uVar2,&DAT_02172fc0,local_2f0);
  local_2f0[0] = 1;
  local_2d0[0] = 0;
  uVar2 = FUN_0153bf80(*(undefined8 *)puVar1,local_2d0);
  FUN_01513800(uVar2,&DAT_02172fc4,local_2f0);
  local_2f0[0] = 1;
  local_2d0[0] = 0;
  uVar2 = FUN_0153bf80(*(undefined8 *)puVar1,local_2d0);
  FUN_01513800(uVar2,&DAT_02172fc8,local_2f0);
  local_2f0[0] = 1;
  local_2d0[0] = 0;
  uVar2 = FUN_0153bf80(*(undefined8 *)puVar1,local_2d0);
  FUN_01513800(uVar2,&DAT_02172fcc,local_2f0);
  plVar4 = *(long **)(*(long *)PTR_DAT_02710540 + 0x128);
  __s = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,0x4610,4);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
                    /* WARNING: Subroutine does not return */
    memset(__s,0,0x4610);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


