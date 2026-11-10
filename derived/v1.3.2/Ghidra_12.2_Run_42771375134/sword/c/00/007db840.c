/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007db840; name: FUN_007db840
 */


bool FUN_007db840(long param_1,void *param_2,uint param_3,undefined2 param_4,undefined4 param_5)

{
  ulong uVar1;
  undefined2 *puVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ErrorResultVariant *this;
  undefined4 local_60 [4];
  int local_50 [4];
  undefined4 local_38 [2];
  
  bVar3 = false;
  if (param_3 != 0) {
    uVar1 = (ulong)param_3 + 4;
    if (uVar1 < 0x24001) {
      puVar2 = (undefined2 *)(param_1 + 0x240f0);
      *puVar2 = param_4;
      *(undefined1 *)(param_1 + 0x240f2) = *(undefined1 *)(param_1 + 0x480f0);
      *(undefined1 *)(param_1 + 0x240f3) = 0;
      memcpy((void *)(param_1 + 0x240f4),param_2,(ulong)param_3);
      bVar3 = false;
      if ((*(long *)PTR_DAT_027104a0 != 0) &&
         (lVar4 = FUN_007a84f0(*(long *)PTR_DAT_027104a0,param_5), bVar3 = false, lVar4 != 0)) {
        if (*(long *)PTR_DAT_02716a30 == 0) {
          bVar3 = false;
        }
        else {
          lVar6 = *(long *)(*(long *)PTR_DAT_02716a30 + 0xf0);
          if (lVar6 != 0) {
            FUN_007db620(param_1,lVar6,puVar2,uVar1 & 0xffffffff,param_5);
          }
          uVar5 = FUN_0194d3a0(lVar4);
          if (((uVar5 & 1) == 0) ||
             (FUN_0194cfd0(local_50,lVar4,puVar2,uVar1 & 0xffffffff,0), local_50[0] == 0)) {
            bVar3 = true;
          }
          else {
            local_60[0] = 0x4c0d;
            this = (ErrorResultVariant *)((ulong)local_60 | 4);
            nn::err::ErrorResultVariant::ErrorResultVariant(this);
            local_38[0] = 0;
            nn::err::ErrorResultVariant::operator=(this,(Result *)local_38);
            local_60[0] = 0x10c08;
            nn::err::ErrorResultVariant::ErrorResultVariant(this);
            local_38[0] = 0;
            nn::err::ErrorResultVariant::operator=(this,(Result *)local_38);
            bVar3 = local_50[0] == 0;
          }
        }
      }
    }
  }
  return bVar3;
}


