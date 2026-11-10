/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0101e6d0; name: FUN_0101e6d0
 */


void FUN_0101e6d0(long param_1,uint param_2,long *param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  
  plVar2 = (long *)(**(code **)(*param_3 + 0x10))(param_3,0x40,8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_3;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    plVar2[6] = 0;
    plVar2[7] = 0;
    puVar1 = PTR_DAT_027236b0;
    plVar2[2] = 0;
    plVar2[3] = 0;
    *(undefined2 *)((long)plVar2 + 0x34) = 0;
    *(undefined4 *)(plVar2 + 7) = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[1] = 0;
    plVar2[4] = 0;
    plVar2[5] = 0x3f4f04ff00000020;
    *(undefined4 *)(plVar2 + 6) = 0x3f000000;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    if (param_2 < 2) {
      param_1 = param_1 + (ulong)param_2 * 0x20;
      puVar4 = *(undefined8 **)(param_1 + 0x20);
      *(long **)(param_1 + 0x20) = plVar2;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4);
        (**(code **)(**(long **)(param_1 + 0x28) + 0x18))
                  (*(long **)(param_1 + 0x28),puVar4,*(undefined8 *)(param_1 + 0x30),
                   *(undefined8 *)(param_1 + 0x38));
      }
      *(long **)(param_1 + 0x28) = param_3;
      *(undefined8 *)(param_1 + 0x30) = 0x40;
      *(undefined8 *)(param_1 + 0x38) = 8;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


