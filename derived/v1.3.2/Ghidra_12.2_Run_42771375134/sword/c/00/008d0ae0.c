/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d0ae0; name: FUN_008d0ae0
 */


undefined8 FUN_008d0ae0(long *param_1)

{
  code *pcVar1;
  int iVar2;
  ProfanityFilter *this;
  
  DAT_02a4cb80 = param_1;
  DAT_02a4cb88 = (**(code **)(*param_1 + 0x10))(param_1,0x20000,0x1000);
  if (DAT_02a4cb90 == (ProfanityFilter *)0x0) {
    this = (ProfanityFilter *)(**(code **)(*param_1 + 0x10))(param_1,0x30,8);
    nn::ngc::ProfanityFilter::ProfanityFilter(this);
    DAT_02a4cb90 = this;
    iVar2 = nn::ngc::ProfanityFilter::Initialize(this,DAT_02a4cb88);
  }
  else {
    iVar2 = nn::ngc::ProfanityFilter::Initialize(DAT_02a4cb90,DAT_02a4cb88);
  }
  if (iVar2 != 0) {
    nn::result::detail::OnUnhandledResult(iVar2);
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0,0x8d0b9c);
    (*pcVar1)();
  }
  (**(code **)(*(long *)DAT_02a4cb90 + 0x10))();
  return 0;
}


