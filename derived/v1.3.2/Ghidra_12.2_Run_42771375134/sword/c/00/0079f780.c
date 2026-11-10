/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0079f780; name: FUN_0079f780
 */


void FUN_0079f780(long param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((DAT_029f4b48 & 1) == 0) {
    nn::bcat::Initialize();
    DAT_029f4b48 = 1;
  }
  if (*(long *)(param_1 + 0x50) == 0) {
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x40,8);
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    FUN_0079f050(uVar1,param_2);
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    lVar2 = *(long *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = uVar1;
    if (lVar2 != 0) {
      FUN_0079ffb0(lVar2);
      (**(code **)(**(long **)(param_1 + 0x58) + 0x18))
                (*(long **)(param_1 + 0x58),lVar2,*(undefined8 *)(param_1 + 0x60),
                 *(undefined8 *)(param_1 + 0x68));
    }
    *(long **)(param_1 + 0x58) = param_2;
    *(undefined8 *)(param_1 + 0x60) = 0x40;
    *(undefined8 *)(param_1 + 0x68) = 8;
  }
  return;
}


