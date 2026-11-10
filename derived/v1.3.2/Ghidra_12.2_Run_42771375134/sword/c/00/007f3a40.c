/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007f3a40; name: FUN_007f3a40
 */


undefined1  [16] FUN_007f3a40(long param_1,string *param_2,string *param_3,int param_4)

{
  ulong uVar1;
  undefined1 *puVar2;
  bool bVar3;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  string *psVar7;
  string *this;
  uint uVar8;
  undefined1 auVar9 [16];
  string local_90;
  undefined7 uStack_8f;
  ulong local_88;
  undefined1 *local_80;
  ulong local_78;
  ulong local_70;
  undefined1 *local_68;
  
  this = (string *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (((byte)*this & 1) == 0) {
    *(undefined2 *)this = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  bVar3 = ((byte)*param_2 & 1) != 0;
  uVar5 = (ulong)((byte)*param_2 >> 1);
  if (bVar3) {
    uVar5 = *(ulong *)(param_2 + 8);
  }
  if (uVar5 != 0) {
    psVar7 = *(string **)(param_2 + 0x10);
    if (!bVar3) {
      psVar7 = param_2 + 1;
    }
    if (*psVar7 == (string)0x2e) {
      std::string::string((string *)&local_78,param_2,1,0xffffffffffffffff,(allocator *)param_2);
      auVar9 = FUN_007f3660(param_1,&local_78);
      goto joined_r0x007f3db8;
    }
  }
  uVar5 = std::string::find((char)param_2,0x2e);
  local_70 = 0;
  local_68 = (undefined1 *)0x0;
  local_78 = 0;
  if (uVar5 == 0xffffffffffffffff) {
    std::string::operator=((string *)&local_78,param_2);
  }
  else {
    std::string::string(&local_90,param_2,0,uVar5,(allocator *)param_2);
    if ((local_78 & 1) != 0) {
      *local_68 = 0;
      local_70 = 0;
      if ((local_78 & 1) != 0) {
        operator_delete(local_68);
      }
    }
    local_70 = local_88;
    local_68 = local_80;
    local_78 = CONCAT71(uStack_8f,local_90);
  }
  std::string::string(&local_90,param_3);
  cVar4 = (char)&local_90;
  uVar5 = std::string::rfind(cVar4,0x2e);
  if (uVar5 != 0xffffffffffffffff) {
    if (param_4 == 1) {
      do {
        std::string::erase((ulong)&local_90,uVar5);
        uVar5 = (ulong)((byte)local_90 >> 1);
        if (((byte)local_90 & 1) != 0) {
          uVar5 = local_88;
        }
        std::string::append((ulong)&local_90,'\x01');
        puVar2 = (undefined1 *)((ulong)&local_78 | 1);
        if ((local_78 & 1) != 0) {
          puVar2 = local_68;
        }
        std::string::append((char *)&local_90,(ulong)puVar2);
        auVar9 = FUN_007f3660(param_1,&local_90);
        uVar8 = auVar9._0_4_;
        if (uVar8 != 0) {
          uVar6 = local_78 >> 1 & 0x7f;
          if ((local_78 & 1) != 0) {
            uVar6 = local_70;
          }
          uVar1 = (ulong)((byte)*param_2 >> 1);
          if (((byte)*param_2 & 1) != 0) {
            uVar1 = *(ulong *)(param_2 + 8);
          }
          if (uVar6 < uVar1) {
            if ((uVar8 < 9) && ((1 << (ulong)(uVar8 & 0x1f) & 0x152U) != 0)) goto LAB_007f3dec;
          }
          else if ((uVar8 == 1) || (uVar8 == 4)) goto joined_r0x007f3e34;
        }
        std::string::erase((ulong)&local_90,uVar5);
        uVar5 = std::string::rfind(cVar4,0x2e);
      } while (uVar5 != 0xffffffffffffffff);
    }
    else {
      do {
        std::string::erase((ulong)&local_90,uVar5);
        uVar5 = (ulong)((byte)local_90 >> 1);
        if (((byte)local_90 & 1) != 0) {
          uVar5 = local_88;
        }
        std::string::append((ulong)&local_90,'\x01');
        puVar2 = (undefined1 *)((ulong)&local_78 | 1);
        if ((local_78 & 1) != 0) {
          puVar2 = local_68;
        }
        std::string::append((char *)&local_90,(ulong)puVar2);
        auVar9 = FUN_007f3660(param_1,&local_90);
        uVar8 = auVar9._0_4_;
        if (uVar8 != 0) {
          uVar6 = local_78 >> 1 & 0x7f;
          if ((local_78 & 1) != 0) {
            uVar6 = local_70;
          }
          uVar1 = (ulong)((byte)*param_2 >> 1);
          if (((byte)*param_2 & 1) != 0) {
            uVar1 = *(ulong *)(param_2 + 8);
          }
          if (uVar1 <= uVar6) goto joined_r0x007f3e34;
          if ((uVar8 < 9) && ((1 << (ulong)(uVar8 & 0x1f) & 0x152U) != 0)) goto LAB_007f3dec;
        }
        std::string::erase((ulong)&local_90,uVar5);
        uVar5 = std::string::rfind(cVar4,0x2e);
      } while (uVar5 != 0xffffffffffffffff);
    }
  }
  auVar9 = FUN_007f3660(param_1,param_2);
joined_r0x007f3e34:
  if (((byte)local_90 & 1) != 0) {
    operator_delete(local_80);
  }
joined_r0x007f3db8:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  return auVar9;
LAB_007f3dec:
  std::string::append(&local_90,(ulong)param_2,uVar6);
  auVar9 = FUN_007f3660(param_1,&local_90);
  if (auVar9._0_4_ == 0) {
    std::string::operator=(this,&local_90);
  }
  goto joined_r0x007f3e34;
}


