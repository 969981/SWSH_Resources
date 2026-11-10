/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012af3d0; name: FUN_012af3d0
 */


undefined8 FUN_012af3d0(long *param_1)

{
  long lVar1;
  WebPageReturnValue aWStack_3030 [4112];
  ShowWebPageArg aSStack_2020 [8192];
  
  lVar1 = *param_1;
  nn::web::ShowWebPageArg::ShowWebPageArg(aSStack_2020,(char *)(lVar1 + 0x60));
  nn::web::ShowWebPageArg::SetBootDisplayKind(aSStack_2020,*(undefined4 *)(lVar1 + 0x160));
  nn::web::ShowWebPageArg::SetBackgroundKind(aSStack_2020,*(undefined4 *)(lVar1 + 0x164));
  nn::web::WebPageReturnValue::WebPageReturnValue(aWStack_3030);
  nn::web::ShowWebPage(aWStack_3030,aSStack_2020);
  return 1;
}


