/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010278e0; name: FUN_010278e0
 */


void FUN_010278e0(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar1 = PTR_DAT_02710860;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar2 + 0x80) < 0x10) {
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    lVar3 = (**(code **)(*param_2 + 0x10))(param_2,0x80,8);
    if (lVar3 == 0) {
      (**(code **)(*param_2 + 0xb8))(param_2);
    }
    FUN_0077d050(lVar3,0x400);
    *(long **)(lVar3 + 8) = param_2;
    *(long *)(lVar3 + 0x10) = lVar3;
    *(undefined8 *)(lVar3 + 0x18) = 0x80;
    *(undefined8 *)(lVar3 + 0x20) = 8;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    if (*param_1 != 0) {
      (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
      *param_1 = 0;
    }
    *param_1 = lVar3;
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar2 + 0x80) < 0x10) {
      *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      lVar3 = (**(code **)(*param_2 + 0x10))(param_2,0x80,8);
      if (lVar3 == 0) {
        (**(code **)(*param_2 + 0xb8))(param_2);
      }
      FUN_0077d050(lVar3,0x400);
      *(long **)(lVar3 + 8) = param_2;
      *(long *)(lVar3 + 0x10) = lVar3;
      *(undefined8 *)(lVar3 + 0x18) = 0x80;
      *(undefined8 *)(lVar3 + 0x20) = 8;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      if (param_1[1] != 0) {
        (**(code **)(*(long *)(param_1[1] + 0x48) + 0x18))();
        param_1[1] = 0;
      }
      param_1[1] = lVar3;
      param_1[2] = -0x340d631b7bddd9bb;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


