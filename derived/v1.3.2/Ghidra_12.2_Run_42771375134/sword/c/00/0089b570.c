/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0089b570; name: FUN_0089b570
 */


void FUN_0089b570(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  plVar3 = (long *)FUN_00ff5cf0();
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar3;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  plVar5 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x180,8);
  if (plVar5 == (long *)0x0) {
    (**(code **)(*plVar3 + 0xb8))(plVar3);
  }
  FUN_00ff5da0(plVar5,param_1);
  puVar1 = PTR_DAT_027176c8 + 0x58;
  puVar2 = PTR_DAT_027176c8 + 0x98;
  *plVar5 = (long)(PTR_DAT_027176c8 + 0x10);
  plVar5[9] = (long)puVar1;
  plVar5[10] = (long)puVar2;
  *(undefined1 *)(plVar5 + 0xc) = 0;
  *(undefined8 *)((long)plVar5 + 100) = 0;
  *(undefined8 *)((long)plVar5 + 0x6c) = 0x300000000;
                    /* WARNING: Subroutine does not return */
  memset((void *)((long)plVar5 + 0x74),0,0x108);
}


