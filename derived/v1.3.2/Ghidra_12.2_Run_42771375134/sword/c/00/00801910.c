/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00801910; name: overflow
 */


/* std::stringbuf::overflow(int) */

ulong __thiscall std::stringbuf::overflow(stringbuf *this,int param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  char cVar4;
  stringbuf *psVar5;
  stringbuf *psVar6;
  stringbuf *psVar7;
  stringbuf *psVar8;
  long lVar9;
  long lVar10;
  stringbuf *local_68;
  
  if (param_1 == -1) {
    uVar3 = 0;
  }
  else {
    psVar8 = *(stringbuf **)(this + 0x30);
    psVar7 = *(stringbuf **)(this + 0x38);
    lVar1 = *(long *)(this + 0x10);
    lVar2 = *(long *)(this + 0x18);
    if (psVar8 == psVar7) {
      if (((byte)this[0x60] >> 4 & 1) == 0) {
        return 0xffffffff;
      }
      lVar9 = *(long *)(this + 0x58);
      lVar10 = *(long *)(this + 0x28);
      psVar7 = this + 0x40;
      std::string::push_back((char)psVar7);
      if (((byte)this[0x40] & 1) == 0) {
        cVar4 = '\x16';
      }
      else {
        cVar4 = ((byte)*(undefined8 *)psVar7 & 0xfe) - 1;
      }
      std::string::resize((ulong)psVar7,cVar4);
      if (((byte)*psVar7 & 1) == 0) {
        psVar6 = this + 0x41;
        uVar3 = (ulong)((byte)*psVar7 >> 1);
      }
      else {
        uVar3 = *(ulong *)(this + 0x48);
        psVar6 = *(stringbuf **)(this + 0x50);
      }
      psVar7 = psVar6 + uVar3;
      psVar8 = psVar6 + ((long)psVar8 - lVar10);
      psVar5 = psVar6 + (lVar9 - lVar10);
      *(stringbuf **)(this + 0x28) = psVar6;
      *(stringbuf **)(this + 0x30) = psVar8;
      *(stringbuf **)(this + 0x38) = psVar7;
      *(stringbuf **)(this + 0x58) = psVar5;
    }
    else {
      psVar5 = *(stringbuf **)(this + 0x58);
    }
    local_68 = psVar8 + 1;
    psVar6 = this + 0x58;
    if (psVar5 <= local_68) {
      psVar6 = (stringbuf *)&local_68;
    }
    psVar6 = *(stringbuf **)psVar6;
    *(stringbuf **)(this + 0x58) = psVar6;
    if (((byte)this[0x60] >> 3 & 1) != 0) {
      if (((byte)this[0x40] & 1) == 0) {
        psVar5 = this + 0x41;
      }
      else {
        psVar5 = *(stringbuf **)(this + 0x50);
      }
      *(stringbuf **)(this + 0x10) = psVar5;
      *(stringbuf **)(this + 0x18) = psVar5 + (lVar2 - lVar1);
      *(stringbuf **)(this + 0x20) = psVar6;
    }
    if (psVar8 == psVar7) {
                    /* WARNING: Could not recover jumptable at 0x00801aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*(long *)this + 0x68))(this,param_1 & 0xff);
      return uVar3;
    }
    uVar3 = (ulong)(param_1 & 0xff);
    *(stringbuf **)(this + 0x30) = local_68;
    *psVar8 = SUB41(param_1,0);
  }
  return uVar3;
}


