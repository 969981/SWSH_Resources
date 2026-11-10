/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010597f0; name: FUN_010597f0
 */


/* WARNING: Control flow encountered bad instruction data */

long * FUN_010597f0(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  plVar5 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0xc0,8);
  if (plVar5 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
    FUN_00700120(0,0,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_00700120(plVar5,0,1);
  puVar2 = PTR_DAT_02723a30;
  puVar1 = PTR_DAT_02723a30 + 0x10;
  plVar5[0x16] = 0;
  plVar5[0x17] = 0;
  *plVar5 = (long)puVar1;
  plVar5[9] = (long)(puVar2 + 0x98);
  plVar5[10] = (long)(puVar2 + 0xd8);
  FUN_006cf0a0(&local_50,PTR_DAT_02723a08);
  lVar3 = local_38;
  plVar5[0x10] = local_50;
  plVar5[0x11] = local_48;
  plVar5[0x12] = local_40;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  lVar6 = plVar5[0x13];
  plVar5[0x13] = lVar3;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  plVar5[1] = (long)param_2;
  plVar5[2] = (long)plVar5;
  plVar5[3] = 0xc0;
  plVar5[4] = 8;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  return plVar5;
}


