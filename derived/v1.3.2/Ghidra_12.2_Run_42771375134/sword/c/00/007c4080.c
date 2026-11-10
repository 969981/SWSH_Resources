/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c4080; name: FUN_007c4080
 */


undefined8 FUN_007c4080(void)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_38;
  int local_34;
  
  iVar3 = nn::ldn::GetState();
  if (iVar3 != 0) {
    uVar4 = nn::ldn::GetState();
    if ((int)uVar4 == 1) {
      return uVar4;
    }
    iVar3 = nn::ldn::GetState();
    if ((iVar3 != 0) && (cVar2 = FUN_007a9cb0(), cVar2 == '\0')) {
      nn::ldn::Finalize();
      cVar2 = FUN_007a9cb0();
      goto joined_r0x007c40ec;
    }
  }
  cVar2 = FUN_007a9cb0();
joined_r0x007c40ec:
  if ((cVar2 == '\0') && (iVar3 = nn::ldn::Initialize(), puVar1 = PTR_DAT_02716b80, iVar3 != 0)) {
    lVar5 = *(long *)PTR_DAT_02716b80;
    if (lVar5 != 0) {
      local_38 = 2;
      FUN_007c2c00(lVar5,&local_38);
      local_38._0_1_ = 1;
      local_34 = 0;
      FUN_007c2c50(lVar5,&local_38);
      if (*(long *)puVar1 == 0) {
        return 0;
      }
      local_38 = CONCAT31(local_38._1_3_,1);
      local_34 = iVar3;
      FUN_007c30a0(*(long *)puVar1,&local_38);
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}


