/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a0410; name: FUN_007a0410
 */


void FUN_007a0410(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_026104e0;
  if (param_1[0x4e] != 0) {
    (**(code **)(*(long *)(param_1[0x4e] + 0x48) + 0x18))();
    param_1[0x4e] = 0;
  }
  nn::bcat::DeliveryCacheProgress::~DeliveryCacheProgress((DeliveryCacheProgress *)(param_1 + 2));
  return;
}


