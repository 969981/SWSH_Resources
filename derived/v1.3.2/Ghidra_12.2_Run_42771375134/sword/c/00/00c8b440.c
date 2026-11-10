/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c8b440; name: FUN_00c8b440
 */


void FUN_00c8b440(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  void *__s;
  long *plVar3;
  long lVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x18);
  lVar4 = *(long *)(param_2 + 0x20);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(param_1 + 0x80);
  *(long *)(param_1 + 0x80) = lVar4;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x40);
  FUN_008d4280(&local_50);
  plVar3 = *(long **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0xa0) = local_50;
  *(undefined8 *)(param_1 + 0xa8) = uStack_48;
  __s = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,0x770,0x10);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar4 + 0x80) < 0x10) {
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar3;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
                    /* WARNING: Subroutine does not return */
    memset(__s,0,0x770);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


