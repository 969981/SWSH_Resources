/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012aedc0; name: FUN_012aedc0
 */


bool FUN_012aedc0(undefined8 *param_1,uint param_2,BigNum *param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  uint uVar13;
  long lVar14;
  BigNum aBStack_1330 [8];
  long local_1328;
  undefined1 auStack_1310 [256];
  BigNum aBStack_1210 [8];
  long local_1208;
  undefined1 auStack_11f0 [8];
  Sha256Impl aSStack_11e8 [112];
  undefined4 local_1178;
  undefined4 local_1170;
  char local_1168;
  char local_1167;
  char local_1166;
  char local_1165 [253];
  undefined1 auStack_1068 [4104];
  
  plVar12 = *(long **)(*(long *)PTR_DAT_02710540 + 200);
  iVar4 = FUN_00884820(*param_1);
  lVar1 = (ulong)(iVar4 * 0x148 | 2) + 2;
  uVar7 = (**(code **)(*plVar12 + 0x10))(plVar12,lVar1,8);
  iVar5 = FUN_00884820(*param_1);
  iVar4 = 0;
  if (iVar5 != 0) {
    uVar13 = 0;
    do {
      uVar8 = (**(code **)(*(long *)*param_1 + 0x58))((long *)*param_1,uVar13);
      thunk_FUN_008787a0(uVar8,uVar7 + (long)iVar4);
      iVar4 = iVar4 + 0x148;
      uVar13 = uVar13 + 1;
      uVar6 = FUN_00884820(*param_1);
    } while (uVar13 < uVar6);
  }
  *(ushort *)(uVar7 + (long)iVar4) =
       (ushort)(param_2 >> 8) & 0xff | (ushort)((param_2 & 0xff00ff) << 8);
  *(undefined2 *)(uVar7 + ((long)iVar4 | 2U)) = 0x100;
  nn::crypto::detail::BigNum::BigNum(aBStack_1330);
  nn::crypto::detail::BigNum::ReserveStatic((uint *)aBStack_1330,(int)auStack_1310);
  nn::crypto::detail::BigNum::BigNum(aBStack_1210);
  nn::crypto::detail::BigNum::ReserveStatic((uint *)aBStack_1210,(int)auStack_11f0);
  local_1178 = 0;
  local_1170 = 0;
  lVar14 = *(long *)(*(long *)PTR_DAT_02710798 + 0x260);
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
  }
  lVar10 = 0;
  iVar4 = 0;
  uVar9 = lVar14 + 0x70U;
  do {
    lVar2 = lVar14 + lVar10;
    if ((*(char *)(lVar2 + 0x70) == '\0') && (iVar4 = iVar4 + 1, iVar4 == 3)) {
      uVar9 = uVar9 + 1;
      break;
    }
    if ((*(char *)(lVar2 + 0x71) == '\0') && (iVar4 = iVar4 + 1, iVar4 == 3)) {
      uVar9 = lVar2 + 0x72;
      break;
    }
    lVar10 = lVar10 + 2;
    uVar9 = uVar9 + 2;
  } while ((uint)lVar10 < 0x100);
  iVar4 = *(int *)(lVar14 + 0x60);
  nn::crypto::detail::Sha256Impl::Initialize();
  uVar9 = nn::crypto::detail::BigNum::Set(aBStack_1330,uVar9);
  if (((((uVar9 & 1) != 0) && (local_1328 != 0)) &&
      (uVar9 = nn::crypto::detail::BigNum::Set(aBStack_1210,(lVar14 + 0x70U + (long)iVar4) - 3),
      (uVar9 & 1) != 0)) && (local_1208 != 0)) {
    local_1170 = 1;
  }
  (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
  nn::crypto::detail::Sha256Impl::Update(aSStack_11e8,uVar7);
  uVar9 = nn::crypto::detail::BigNum::ModExp
                    (aBStack_1330,&local_1168,param_3,(ulong)aBStack_1210,(uint *)&DAT_00000100,
                     (ulong)auStack_1068);
  bVar3 = false;
  if (((uVar9 & 1) != 0) && (local_1168 == '\0')) {
    if (local_1167 == '\x01') {
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        if ((local_1166 != -1) || (local_1165[uVar11] != -1)) goto LAB_012af068;
        local_1166 = local_1165[uVar11 + 1];
        uVar9 = uVar11 + 2;
      } while (uVar11 + 2 < 0xca);
      if ((local_1166 == '\0') &&
         (iVar4 = memcmp(local_1165 + uVar11 + 2,PTR_Asn1ObjectIdentifier_027273b0,0x13), iVar4 == 0
         )) {
        nn::crypto::detail::Sha256Impl::GetHash(aSStack_11e8,(ulong)auStack_1068);
        iVar4 = memcmp(auStack_1068,local_1165 + uVar11 + 0x15,0x20);
        bVar3 = iVar4 == 0;
        goto LAB_012af06c;
      }
    }
LAB_012af068:
    bVar3 = false;
  }
LAB_012af06c:
  local_1170 = 2;
  (**(code **)(*plVar12 + 0x18))(plVar12,uVar7,lVar1,8);
  nn::crypto::detail::Sha256Impl::~Sha256Impl(aSStack_11e8);
  nn::crypto::detail::BigNum::Cleanse();
  nn::crypto::detail::BigNum::~BigNum(aBStack_1210);
  nn::crypto::detail::BigNum::~BigNum(aBStack_1330);
  return bVar3;
}


