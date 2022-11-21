//SPDX-License-Identifier: MIT
pragma solidity >=0.8.7;

import "hardhat/console.sol";

contract studentmanagement{

    struct student{
        uint256 ID;
        string fname;
        string lname;
        uint256 marks;
    }
    mapping (uint256 => student) public records;
    uint256 public count=0;

    function add_records (uint256 _id, string memory _fname, string memory _lname, uint256 _marks)public
    {
        count = count + 1;
        records[count] = student(_id, _fname, _lname, _marks);
    }
    fallback()external{
        console.log("Fallback called");
    }
}